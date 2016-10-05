//
//  WSClient+CallAPI.m
//  KCSSIP
//
//  Created by KCSPL on 5/11/15.
//  Copyright (c) 2015 kcspl. All rights reserved.
//

#import "WSClient+CallAPI.h"

@implementation WSClient (CallAPI)

-(void) GetRequestWithParameters:(NSMutableDictionary *)parameters API:(WSAPI)wsapi complete:(void (^)(id responseObject, NSError *error))complete
{
    
    AFHTTPRequestOperationManager *manager = [AFHTTPRequestOperationManager manager];
    if (wsapi == WSAPIAddContact) {
        manager.requestSerializer = [AFJSONRequestSerializer serializer];
    }
  
    manager.responseSerializer = [AFJSONResponseSerializer serializer];
    AFHTTPRequestOperation *op  = [manager GET:[self requestURLFor:wsapi] parameters:parameters success:^(AFHTTPRequestOperation *operation, id responseObject) {
        NSLog(@"JSON: %@", responseObject);
        if (responseObject) {
            if ([responseObject[0][@"ErrorCode"] intValue] == 1) {
                [[NSNotificationCenter defaultCenter] postNotificationName:@"PASSWORDCHANGED" object:nil];
            }
        }
        complete(responseObject,nil);
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        NSLog(@"Error: %@", error);
        if (error != nil && (error.code == -1000 || error.code == -1001 || error.code == -1002 || error.code == -1003 || error.code == -1004 || error.code == -1005 || error.code == -1008 || error.code == -1009))
        {
            complete(nil , nil);
            
        }
        else {
            complete(nil , error);
            
        }
    }];
    [op start];
}




@end

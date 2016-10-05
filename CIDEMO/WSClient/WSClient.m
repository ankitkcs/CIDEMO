//
//  WSClient.m
//  KCSSIP
//
//  Created by KCSPL on 5/11/15.
//  Copyright (c) 2015 kcspl. All rights reserved.
//

#import "WSClient.h"

@implementation WSClient
+ (WSClient *)sharedClient
{
    static WSClient *sharedAPIClient = nil;
    static dispatch_once_t onceTokenAPIManager;
    dispatch_once(&onceTokenAPIManager, ^{
        sharedAPIClient = [[self alloc] init];
    });
    return sharedAPIClient;
}


#pragma mark - functions
-(NSString *) getQuery:(NSMutableDictionary *) parameters
{
    NSMutableString *query = [NSMutableString string];
    [[parameters allKeys] enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        if(idx != 0)
        {
            [query appendString:@"&"];
        }
        [query appendFormat:@"%@=%@",obj,[parameters objectForKey:obj]];
    }];
    query = (NSMutableString *)[query stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    return (NSString *)query;
}


@end

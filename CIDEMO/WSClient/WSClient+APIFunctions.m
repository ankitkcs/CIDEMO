//
//  WSClient+APIFunctions.m
//  KCSSIP
//
//  Created by KCSPL on 5/11/15.
//  Copyright (c) 2015 kcspl. All rights reserved.
//

#import "WSClient+APIFunctions.h"

@implementation WSClient (APIFunctions)
-(NSString *) getAPI:(WSAPI)wsapi
{
    NSString *apiname = @"";
    switch (wsapi) {
        case WSAPIGetSetting:
            apiname = @"api/Common/GetSettings";
            break;
        case WSAPILogin:
            apiname = @"api/AppUser/Login";
            break;
      
        default:
            break;
    }
    return apiname;
}

-(NSString *) requestURLFor:(WSAPI)wsapi
{
    NSLog(@"%@",[NSString stringWithFormat:@"%@/%@",@"https://web.magnitudefb.com",[self getAPI:wsapi]]);
    return [NSString stringWithFormat:@"%@/%@",@"https://web.magnitudefb.com",[self getAPI:wsapi]];
}

@end

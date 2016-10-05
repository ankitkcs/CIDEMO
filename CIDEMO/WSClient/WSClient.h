//
//  WSClient.h
//  KCSSIP
//
//  Created by KCSPL on 5/11/15.
//  Copyright (c) 2015 kcspl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <SystemConfiguration/SystemConfiguration.h>

@interface WSClient : NSObject
+ (WSClient *)sharedClient;
-(NSString *) getQuery:(NSMutableDictionary *) parameters;
@end

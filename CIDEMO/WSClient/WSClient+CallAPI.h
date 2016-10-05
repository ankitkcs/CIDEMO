//
//  WSClient+CallAPI.h
//  KCSSIP
//
//  Created by KCSPL on 5/11/15.
//  Copyright (c) 2015 kcspl. All rights reserved.
//

#import "WSClient.h"
#import "WSClient+APIFunctions.h"
#import "AFNetworking.h"

@interface WSClient (CallAPI)
-(void) GetRequestWithParameters:(NSMutableDictionary *)parameters API:(WSAPI)wsapi complete:(void (^)(id responseObject, NSError *error))complete;
@end

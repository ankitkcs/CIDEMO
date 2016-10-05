//
//  WSClient+APIFunctions.h
//  KCSSIP
//
//  Created by KCSPL on 5/11/15.
//  Copyright (c) 2015 kcspl. All rights reserved.
//

#import "WSClient.h"
typedef enum {
    WSAPIGetSetting = 1,
    WSAPILogin,
    WSAPIGetGeneralStatus,
    WSAPIGetActivityUpdate,
    WSAPIForgotPassword,
    WSAPIRegisterDevice,
    WSAPIChangePassword,
    WSAPIActivity,
    WSAPIGetActionTemplateByActivity,
    WSAPIGetReportCountByActivity,
    WSAPIQuestion,
    WSAPISetTellUs,
    WSAPISetNotificationStatus,
    WSAPISetDelayTime,
    WSAPIAddContact,
    WSAPIGetContactList,
    WSAPIGetContactForm, 
    WSAPISetContact,
    WSAPISetContactGroup,
    WSAPIGetSeenClientForm,
    WSAPISetSeenClientForm,
    WSAPIGetActionList,
    WSAPISetAction,
    WSAPISetResolveUnResolve,
    WSAPIGetFeedbackReports,
    WSAPIGetFormLocation,
    WSAPIGetReportDetails,
    WSAPISetReadFormData,
    WSAPIGetAppUserByActivity,
    WSAPITransferForm,
    WSAPIRemoveRecursion,
    WSAPISync,
    WSAPIGetActivityEstablishment,
    WSAPIGetEstablishmentUser,
    WSAPIResndFeedBackReport
} WSAPI;

@interface WSClient (APIFunctions)
-(NSString *) getAPI:(WSAPI)wsapi;
-(NSString *) requestURLFor:(WSAPI)wsapi;
@end

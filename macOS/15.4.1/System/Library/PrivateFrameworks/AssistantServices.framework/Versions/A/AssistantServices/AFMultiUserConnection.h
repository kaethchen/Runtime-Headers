@class NSObject, AFInstanceContext, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFMultiUserConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
    AFInstanceContext *_instanceContext;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (void)getHomeUserIdForSharedUserId:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnectionFactory:(id)a0;
- (void)_clearConnection;
- (id)_multiUserServiceWithErrorHandler:(id /* block */)a0;
- (void)downloadVoiceProfileForiCloudAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)getConformingSharedUserIdForHomeUserId:(id)a0 completion:(id /* block */)a1;
- (void)getConformingSharedUserIds:(id /* block */)a0;
- (void)getFirstNameForSharedUserId:(id)a0 completion:(id /* block */)a1;
- (void)getHomeUserIdOfRecognizedUserWithCompletion:(id /* block */)a0;
- (void)getLoggableIdentiferForUserWithiCloudAltDSID:(id)a0 sharedUserID:(id)a1 sessionID:(id)a2 completion:(id /* block */)a3;
- (void)getMultiUserAudioAppSignalsForSharedUserID:(id)a0 completion:(id /* block */)a1;
- (oneway void)getMultiUserSettingsForRecognizedUserWithCompletion:(id /* block */)a0;
- (void)getMultiUserSettingsForSharedUserID:(id)a0 completion:(id /* block */)a1;
- (void)getPreferredMediaUserHomeUserIDWithCompletion:(id /* block */)a0;
- (oneway void)getPrimaryUserSharedUserInfoWithCompletion:(id /* block */)a0;
- (void)getRecognizableUsersConfromingSharedUserIds:(id /* block */)a0;
- (void)getSharedUserIdForHomeUserId:(id)a0 completion:(id /* block */)a1;
- (void)getSharedUserIdForiCloudAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)getSharedUserInfoForSharedUserID:(id)a0 completion:(id /* block */)a1;
- (void)getSharedUserInfoForiCloudAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)getSharedUserProfileLimitWithCompletion:(id /* block */)a0;
- (void)getUserAgentStringForSharedUserID:(id)a0 completion:(id /* block */)a1;
- (void)getiCloudAltDSIDOfRecognizedUserWithCompletion:(id /* block */)a0;
- (void)homeUserIdToNames:(id /* block */)a0;
- (void)triggerVoiceProfileUploadWithCompletion:(id)a0 completion:(id /* block */)a1;

@end

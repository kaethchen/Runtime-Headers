@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, MDMClientDataProvider;

@interface MDMClientCore : NSObject

@property (nonatomic) unsigned long long channelType;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;
@property (retain, nonatomic) id<MDMClientDataProvider> dataProvider;

+ (id)clientWithChannelType:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)pushToken;
- (void)blockAppInstallsWithCompletion:(id /* block */)a0;
- (void)reauthenticationComplete;
- (void)unblockAppInstallsWithCompletion:(id /* block */)a0;
- (void)_destroyXPCConnectionAndInvalidate:(BOOL)a0;
- (id)_deviceEnrollmentAuthenticationDict;
- (void)_queue_createAndStartMDMXPCConnection;
- (id)_userEnrollmentAuthenticationDictWithEnrollmentID:(id)a0;
- (id)_userFieldsForResponse;
- (unsigned long long)accessRights;
- (BOOL)authenticateWithCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 topic:(id)a4 useDevelopmentAPNS:(BOOL)a5 signMessage:(BOOL)a6 isUserEnrollment:(BOOL)a7 enrollmentID:(id)a8 outError:(id *)a9;
- (BOOL)checkInRequestAtURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 signMessage:(BOOL)a4 isUserEnrollment:(BOOL)a5 enrollmentID:(id)a6 messageType:(id)a7 requestDict:(id)a8 outResponse:(id *)a9 outError:(id *)a10;
- (BOOL)checkOutCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 topic:(id)a4 signMessage:(BOOL)a5 isUserEnrollment:(BOOL)a6 enrollmentID:(id)a7 outError:(id *)a8;
- (void)depPushTokenWithCompletion:(id /* block */)a0;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (BOOL)hasSetPersonaMappingForRestore;
- (id)initWithChannelType:(unsigned long long)a0;
- (id)initWithChannelType:(unsigned long long)a0 dataProvider:(id)a1;
- (BOOL)isActivationLockAllowedWhileSupervised;
- (BOOL)isAwaitingUserConfigured;
- (void)migrateMDMWithContext:(int)a0 completion:(id /* block */)a1;
- (void)monitorDEPPushTokenIfNeededWithCompletion:(id /* block */)a0;
- (void)monitorDEPPushTokenWithCompletion:(id /* block */)a0;
- (void)notifyNewConfiguration;
- (void)processDeviceRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)processUserRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)remoteManagementCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 signMessage:(BOOL)a4 isUserEnrollment:(BOOL)a5 enrollmentID:(id)a6 endpoint:(id)a7 requestData:(id)a8 outResponse:(id *)a9 outError:(id *)a10;
- (void)requestInstallOfAppsInRestoreWithCompletion:(id /* block */)a0;
- (void)retryNotNowResponse;
- (void)scheduleTokenUpdate;
- (void)scheduleTokenUpdateIfNecessary;
- (void)simulateDEPPushWithCompletion:(id /* block */)a0;
- (void)simulatePush;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)a0;
- (void)simulatePushWithCompletion:(id /* block */)a0;
- (void)syncDEPPushTokenWithDelay:(double)a0 completion:(id /* block */)a1;
- (void)touchWithCompletion:(id /* block */)a0;
- (void)uprootMDM;

@end

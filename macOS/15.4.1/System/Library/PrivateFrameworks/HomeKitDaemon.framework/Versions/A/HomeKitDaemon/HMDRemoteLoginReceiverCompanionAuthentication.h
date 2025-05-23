@class HMDRemoteLoginCompanionAuthenticationRequest;

@interface HMDRemoteLoginReceiverCompanionAuthentication : HMDRemoteLoginReceiverAuthentication

@property (readonly, nonatomic) HMDRemoteLoginCompanionAuthenticationRequest *request;

+ (id)logCategory;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)authenticate;
- (void)_authenticate;
- (void)_authenticateAccount:(id)a0 alreadyExists:(BOOL)a1 withCompanionDevice:(id)a2;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 workQueue:(id)a2 remoteMessageSender:(id)a3 delegate:(id)a4 request:(id)a5;

@end

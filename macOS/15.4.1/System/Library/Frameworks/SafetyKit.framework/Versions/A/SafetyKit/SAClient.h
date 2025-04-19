@class NSObject, NSXPCConnection;
@protocol SAEmergencyResponseClientProtocol, SACrashDetectionClientProtocol, OS_dispatch_queue;

@interface SAClient : NSObject <SAClientProtocol> {
    NSObject<OS_dispatch_queue> *_messageQueue;
    id /* block */ _authenticationRequestHandler;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<SACrashDetectionClientProtocol> crashDetectionClientDelegate;
@property (weak, nonatomic) id<SAEmergencyResponseClientProtocol> emergencyResponseClientDelegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)setConnection:(id)a0;
- (id)serverProxy;
- (void)callAuthenticationRequestHandlerWithError;
- (void)callAuthenticationRequestHandlerWithStatus:(long long)a0 error:(id)a1;
- (void)dialVoiceCallToPhoneNumber:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestCrashDetectionAuthorization:(id /* block */)a0;
- (void)requestMostRecentCrashDetectionEvent;
- (void)updateMostRecentCrashDetectionEvent:(id)a0;
- (void)updateVoiceCallStatus:(long long)a0;

@end

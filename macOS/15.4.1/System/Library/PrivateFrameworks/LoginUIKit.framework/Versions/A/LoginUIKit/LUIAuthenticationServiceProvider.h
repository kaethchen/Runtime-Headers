@class NSString, NSXPCConnection, NSError, NSObject;
@protocol OS_dispatch_queue, AuthenticationHintsDelegate;

@interface LUIAuthenticationServiceProvider : NSObject {
    NSObject<OS_dispatch_queue> *providerQueue;
}

@property (copy) NSString *userName;
@property (copy) NSError *error;
@property BOOL serviceActive;
@property BOOL sessionUnlocked;
@property (copy) NSString *serviceName;
@property long long mode;
@property (retain) NSXPCConnection *serviceConnection;
@property id<AuthenticationHintsDelegate> hintsDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;
- (void)activateWithUserName:(id)a0 mode:(long long)a1 withOptions:(id)a2;
- (void)activateWithUserName:(id)a0 sessionUnlocked:(BOOL)a1;
- (id)connectionWithErrorHandler:(id /* block */)a0;
- (void)deactivateWithContext:(id)a0;

@end

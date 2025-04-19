@class NSString, NSXPCConnection, AdminAuthenticator, NSObject, PPSharingServiceViewController;
@protocol OS_dispatch_queue;

@interface PPSharingServiceExtensionManager : NSObject {
    BOOL _initiallyEditable;
    AdminAuthenticator *_authenticator;
    NSObject<OS_dispatch_queue> *_adminQueue;
}

@property (weak) PPSharingServiceViewController *viewController;
@property (retain) NSXPCConnection *connection;
@property (retain) NSString *bundleIdentifier;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)setEditable:(BOOL)a0;
- (void)authorize:(id)a0;
- (void)setServiceState:(long long)a0;
- (void)switchToPanel:(id)a0;
- (void)deauthorize;
- (BOOL)isAutorized;
- (BOOL)performSystemAdministrationBlock:(id /* block */)a0;
- (void)resumeConnectionWithEndpoint:(id)a0;
- (void)serviceViewControllerDidAwake:(id)a0;
- (void)setServiceAvailable:(BOOL)a0;
- (void)setServiceHidden:(BOOL)a0;

@end

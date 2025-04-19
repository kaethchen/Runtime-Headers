@class NSString, NSXPCConnection, AdminAuthenticator, PPSecPrivacyViewController, NSObject;
@protocol OS_dispatch_queue;

@interface PPSecPrivacyExtensionManager : NSObject {
    BOOL _initiallyEditable;
    AdminAuthenticator *_authenticator;
    NSObject<OS_dispatch_queue> *_adminQueue;
}

@property (weak) PPSecPrivacyViewController *viewController;
@property (retain) NSXPCConnection *connection;
@property (retain) NSString *bundleIdentifier;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)setEditable:(BOOL)a0;
- (void)authorize:(id)a0;
- (void)deauthorize;
- (BOOL)isAutorized;
- (BOOL)performSystemAdministrationBlock:(id /* block */)a0;
- (void)resumeConnectionWithEndpoint:(id)a0;
- (void)serviceViewControllerDidAwake:(id)a0;

@end

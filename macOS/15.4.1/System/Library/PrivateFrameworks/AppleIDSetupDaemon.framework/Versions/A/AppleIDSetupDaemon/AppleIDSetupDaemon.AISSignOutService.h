@class AISSignOutContext, NSError;

@interface AppleIDSetupDaemon.AISSignOutService : _TtCs12_SwiftObject <AppleIDSetup.AISDaemonProtocol> {
    void /* unknown type, empty encoding */ serviceOwnersManager;
    void /* unknown type, empty encoding */ accountStore;
}

- (void)signOutAllAccountsWith:(AISSignOutContext *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

@end

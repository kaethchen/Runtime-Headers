@class NSObject;

@interface SUOSULogoutObserver : SUOSULaterObserver

@property (retain) NSObject *logoutInterruptedToken;

- (void).cxx_destruct;
- (void)armObserver;
- (void)armObserverWithContext:(id)a0;
- (void)disarmLaterObserver;

@end

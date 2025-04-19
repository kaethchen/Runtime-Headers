@class NSString, SUSoftwareUpdateController;

@interface SUSoftwareUpdateClientObserver : NSObject <SUSoftwareUpdateControllerDelegate>

@property SUSoftwareUpdateController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)availableUpdatesDidChange;
- (void)catalogURLDidChange;
- (id)initWithSUController:(id)a0;
- (void)installStateDidChange:(id)a0 forUpdateWithProductKey:(id)a1;
- (void)installedBundlesToRegisterWithLaunchServices:(id)a0 completion:(id /* block */)a1;
- (void)updatesQueuedForLaterDidChange;

@end

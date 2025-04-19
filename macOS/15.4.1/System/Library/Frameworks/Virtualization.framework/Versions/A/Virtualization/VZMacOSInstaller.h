@class NSProgress, NSURL, VZVirtualMachine, NSDictionary, NSError;

@interface VZMacOSInstaller : NSObject {
    BOOL _virtualMachineStarted;
    BOOL _installStarted;
    BOOL _installCompleted;
    BOOL _installCancelled;
    BOOL _disableMobileDeviceUpdate;
    id /* block */ _completionHandler;
    struct shared_ptr<VzInstallation::InstallerMessenger> { struct InstallerMessenger *__ptr_; struct __shared_weak_count *__cntrl_; } _messenger;
    NSDictionary *_restoreOptions;
    NSError *_installError;
}

@property (readonly) NSProgress *progress;
@property (readonly) VZVirtualMachine *virtualMachine;
@property (readonly) NSURL *restoreImageURL;

+ (id)_installerWithVirtualMachine:(id)a0 restoreOptions:(id)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_disableMobileDeviceUpdate;
- (id)initWithVirtualMachine:(id)a0 restoreImageURL:(id)a1;
- (void)installWithCompletionHandler:(id /* block */)a0;

@end

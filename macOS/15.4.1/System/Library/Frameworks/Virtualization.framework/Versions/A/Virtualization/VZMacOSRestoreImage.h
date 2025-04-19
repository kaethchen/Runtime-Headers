@class NSArray, NSString, NSURL, VZMacOSConfigurationRequirements, NSDictionary;

@interface VZMacOSRestoreImage : NSObject {
    struct shared_ptr<VzInstallation::InstallerMessenger> { struct InstallerMessenger *__ptr_; struct __shared_weak_count *__cntrl_; } _messenger;
    NSArray *_configurations;
    struct optional<std::array<unsigned long long, 5>> { union { char __null_state_; struct array<unsigned long long, 5UL> { unsigned long long __elems_[5]; } __val_; } ; BOOL __engaged_; } _hostMobileDeviceVersion;
    NSDictionary *_restoreOptions;
}

@property (readonly, copy) NSArray *_configurations;
@property (readonly, getter=isSupported) BOOL supported;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *buildVersion;
@property (readonly) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (readonly, copy) VZMacOSConfigurationRequirements *mostFeaturefulSupportedConfiguration;

+ (void)_fetchAvailableImagesWithCompletionHandler:(id /* block */)a0;
+ (void)_fetchLatestSupportedWithOptions:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_loadCatalogWithOptions:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_loadFileURL:(id)a0 deviceClassParser:(id)a1 completionHandler:(id /* block */)a2;
+ (void)fetchLatestSupportedWithCompletionHandler:(id /* block */)a0;
+ (void)loadFileURL:(id)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WebAppGenerator : NSObject {
    NSURL *_destinationFolderURL;
    NSObject<OS_dispatch_queue> *_internalQueue;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _appGenerationSuddenTerminationDisabler;
}

+ (id)updateAndReturnIconForManifest:(id)a0 inBundle:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_didFailToGenerateWebAppAtURL:(id)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)_generateIconForManifest:(id)a0 inBundle:(id)a1 completionHandler:(id /* block */)a2;
- (void)_removeWebAppAtURL:(id)a0;
- (void)_setDefaultWindowSizeFromBrowserDocument:(id)a0 forBundleURL:(id)a1;
- (BOOL)_setUpInfoDictionaryForAppNamed:(id)a0 withManifest:(id)a1 bundle:(id)a2 error:(id *)a3;
- (id)_webAppDictionaryForAppNamed:(id)a0 withManifest:(id)a1;
- (void)generateWebAppWithManifest:(id)a0 forBrowserDocument:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDestinationFolderURL:(id)a0;

@end

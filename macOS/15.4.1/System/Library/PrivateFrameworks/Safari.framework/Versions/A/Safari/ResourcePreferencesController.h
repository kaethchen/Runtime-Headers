@class NSString, SandboxFileExtensionController, NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ResourcePreferencesController : NSObject <SandboxExtensionPresentationDelegate> {
    SandboxFileExtensionController *_fileExtensionController;
    NSMutableDictionary *_preferenceTypesToExtensionTokenPairs;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_cachedHomePage;
}

@property (class, readonly, copy, nonatomic) NSString *defaultHomePageURLString;

@property (readonly, copy, nonatomic) NSURL *styleSheetFileURLForMigration;
@property (copy, nonatomic) NSURL *styleSheetFileURL;
@property (readonly, nonatomic) BOOL homePageIsForced;
@property (copy, nonatomic) NSString *homePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_addExtensionForAccessibleFileURL:(id)a0 ofType:(unsigned long long)a1;
- (void)_obtainExtensionTokenIfNecessaryForFileURL:(id)a0 ofType:(unsigned long long)a1 permissions:(unsigned long long)a2;
- (void)_removeExtensionWithType:(unsigned long long)a0;
- (id)createSandboxExtensionPresentationController;
- (id)homePageObtainingExtensionTokenIfNecessary:(BOOL)a0;
- (id)homePageURLObtainingExtensionTokenIfNecessary:(BOOL)a0;
- (id)initWithSandboxFileExtensionController:(id)a0;
- (void)prefetchSandboxExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)sandboxExtensionPresentationController:(id)a0 configureOpenPanel:(id)a1 forURL:(id)a2;
- (id)secureDefaults;
- (void)setSandboxExtensionWithToken:(id)a0 forURL:(id)a1 ofType:(unsigned long long)a2;

@end

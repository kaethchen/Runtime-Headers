@interface ICLFeatureFlags : NSObject

@property (class, readonly, nonatomic) BOOL isRestackingEnabled;
@property (class, readonly, nonatomic) BOOL appReferencesEnabled;
@property (class, readonly, nonatomic) BOOL systemAppDeletionEnabled;
@property (class, readonly, nonatomic) BOOL transientBundleCleanupEnabled;
@property (class, readonly, nonatomic) BOOL fullFidelityIconsEnabled;
@property (class, readonly, nonatomic) BOOL twoStageAppInstallEnabled;

@end

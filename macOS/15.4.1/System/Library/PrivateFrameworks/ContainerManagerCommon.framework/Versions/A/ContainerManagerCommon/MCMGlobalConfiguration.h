@class MCMLibraryRepair, NSArray, NSString, NSURL, MCMPOSIXUser, MCMContainerClassPathCache, MCMManagedPathRegistry;
@protocol MCMStaticConfiguration, MCMContainerClassIterator;

@interface MCMGlobalConfiguration : NSObject <MCMGlobalConfiguration> {
    NSURL *_homeDirectory;
    NSURL *_cachesDirectory;
}

@property (nonatomic) BOOL isInternalImage;
@property (readonly, nonatomic) id<MCMStaticConfiguration> staticConfig;
@property (readonly, nonatomic) id<MCMContainerClassIterator> classIterator;
@property (readonly, nonatomic) NSURL *sharedContainersDirectory;
@property (readonly, nonatomic) NSArray *appUserDataItemNames;
@property (readonly, nonatomic) NSArray *excludedFromAppUserData;
@property (readonly, nonatomic) MCMPOSIXUser *defaultUser;
@property (readonly, nonatomic) MCMPOSIXUser *currentUser;
@property (readonly, nonatomic) unsigned int runmode;
@property (readonly, nonatomic) unsigned int userContainerMode;
@property (readonly, nonatomic) unsigned int bundleContainerMode;
@property (readonly, nonatomic) unsigned int systemContainerMode;
@property (readonly, nonatomic) MCMPOSIXUser *bundleContainerOwner;
@property (readonly, nonatomic) MCMPOSIXUser *systemContainerOwner;
@property (readonly, nonatomic) MCMContainerClassPathCache *classPathCache;
@property (readonly, nonatomic) MCMManagedPathRegistry *managedPathRegistry;
@property (readonly, nonatomic) MCMLibraryRepair *libraryRepair;
@property (readonly, nonatomic) BOOL kernelUpcallEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned int)dispositionForContainerClass:(unsigned long long)a0;
- (unsigned int)dispositionForContainerClass:(unsigned long long)a0 forUser:(id)a1;
- (BOOL)handlesGlobalContainers;
- (BOOL)handlesUserContainers;
- (id)initWithStaticConfig:(id)a0 runMode:(unsigned int)a1 userContainerMode:(unsigned int)a2 bundleContainerMode:(unsigned int)a3 bundleContainerOwner:(id)a4 systemContainerMode:(unsigned int)a5 systemContainerOwner:(id)a6 kernelUpcallEnabled:(BOOL)a7;
- (BOOL)isGlobalBundleContainerWithContainerClass:(unsigned long long)a0;
- (BOOL)isGlobalContainerClass:(unsigned long long)a0;
- (BOOL)isGlobalSystemContainerWithContainerClass:(unsigned long long)a0;
- (BOOL)isPerUserBundleContainerWithContainerClass:(unsigned long long)a0;
- (BOOL)isUnsupportedBundleContainerWithContainerClass:(unsigned long long)a0;
- (BOOL)isUnsupportedSystemContainerWithContainerClass:(unsigned long long)a0;
- (BOOL)isUserBundleContainerWithContainerClass:(unsigned long long)a0;
- (BOOL)isUserSystemContainerWithContainerClass:(unsigned long long)a0;
- (void)signpostFirstContainerClass:(unsigned long long)a0;

@end

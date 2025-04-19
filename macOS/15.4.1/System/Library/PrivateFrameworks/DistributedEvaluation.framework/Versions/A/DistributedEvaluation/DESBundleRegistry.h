@class NSString, NSSet;

@interface DESBundleRegistry : NSObject <DESBundleRegistryManaging> {
    NSSet *_lowMemoryExtensions;
    NSSet *_highMemoryExtensions;
    NSSet *_restrictedExtensions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)_extensionsWithEndpointName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)allBundleIds;
- (id)allFedStatsUnrestrictedBundleIds;
- (id)allNonFedStatsUnrestrictedBundleIds;
- (id)allPossibleUnrestrictedFedStatsIds;
- (id)allUnrestrictedBundleIds;
- (id)allUnrestrictedExtensionIds;
- (BOOL)containsBundleId:(id)a0;
- (long long)pluginTypeForBundleId:(id)a0;

@end

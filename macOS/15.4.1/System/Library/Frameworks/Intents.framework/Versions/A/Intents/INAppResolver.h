@class INExecutionFrameworkMapper, NSMutableDictionary, INAppResolverOptions, INLinkActionProvider, INSystemAppMapper, INExecutionCounterpartMapper;

@interface INAppResolver : NSObject

@property (readonly, nonatomic) INExecutionCounterpartMapper *_counterpartMapper;
@property (readonly, nonatomic) INExecutionFrameworkMapper *_frameworkMapper;
@property (readonly, nonatomic) INSystemAppMapper *_systemAppMapper;
@property (readonly, nonatomic) INLinkActionProvider *linkActionProvider;
@property (readonly, nonatomic) NSMutableDictionary *cachedResults;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;
@property (readonly, nonatomic) INAppResolverOptions *globalOptions;
@property (readonly, nonatomic) NSMutableDictionary *intentClassNameToResolverOptions;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } resolverOptionsLock;

+ (void)initialize;
+ (id)sharedResolver;
+ (id)supportedIntentsOverridesForThirdPartyBundleIdentifier:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)setOptions:(id)a0;
- (void)installedApplicationsDidChange:(id)a0;
- (id)_resolvedAppMatchingDescriptor:(id)a0;
- (id)_optionsForIntentClassName:(id)a0;
- (id)_resolvedAppIntentMatchingDescriptor:(id)a0 availableActions:(id)a1 availableEntities:(id)a2;
- (id)_resolvedIntentMatchingDescriptor:(id)a0;
- (id)_resolvedUserActivityMatchingDescriptor:(id)a0;
- (BOOL)cacheHasResultForDescriptor:(id)a0;
- (void)cacheResult:(id)a0 forDescriptor:(id)a1;
- (id)cachedResultForKey:(id)a0;
- (id)counterpartIdentifiersForLocalIdentifier:(id)a0;
- (id)localIdentifiersForCounterpartIdentifier:(id)a0;
- (id)optionsForCurrentContextWithIntentClassName:(id)a0;
- (id)resolveDescriptorByLinkingFileProvidersToFilesApp:(id)a0;
- (id)resolveDescriptorBySwappingIdentifiersWithExtensionIfApplicable:(id)a0;
- (id)resolvedAppIntentMatchingDescriptor:(id)a0 availableActions:(id)a1 availableEntities:(id)a2;
- (id)resolvedAppMatchingDescriptor:(id)a0;
- (id)resolvedIntentMatchingDescriptor:(id)a0;
- (id)resolvedUserActivityMatchingDescriptor:(id)a0;
- (void)setOptions:(id)a0 forIntentClassName:(id)a1;

@end

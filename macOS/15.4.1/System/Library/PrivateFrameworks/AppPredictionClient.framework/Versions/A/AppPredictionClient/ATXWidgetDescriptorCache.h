@class NSDictionary, NSSet, NSString, _PASSimpleCoalescingTimer, CHSWidgetDescriptorProvider, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface ATXWidgetDescriptorCache : NSObject <CHSWidgetDescriptorProviderObserver> {
    CHSWidgetDescriptorProvider *_provider;
    NSString *_cachePath;
    NSString *_legacyCachePath;
    _PASSimpleCoalescingTimer *_coalescedDescriptorUpdateOperation;
    unsigned long long _coalescedDescriptorUpdateOptions;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSSet *_allDescriptors;
    NSHashTable *_observers;
    NSDictionary *_intentToHomeScreenDescriptorDictionary;
    NSDictionary *_containerBundleIdAndKindToHomeScreenDescriptorDictionary;
}

@property (readonly, copy) NSSet *homeScreenDescriptors;
@property (readonly, copy) NSSet *complicationWidgetDescriptors;
@property (readonly, copy) NSSet *modularComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *landscapeModularComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *inlineComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *allWidgetDescriptorsAllowedOnLockscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)prepareForTermination;
- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (id)_fetchAccessoryWidgetDescriptorMetadataOnInternalQueueWithError:(id *)a0;
- (id)_fetchHomeScreenWidgetDescriptorMetadataOnInternalQueueWithError:(id *)a0;
- (id)_mergeNewDescriptorsWithCachedMetadataOnInternalQueue:(id)a0 descriptors:(id)a1;
- (id)_queue_allVisibleDescriptors;
- (void)_queue_descriptorsDidChangeForDescriptorProvider:(id)a0;
- (id)_queue_fetchAllDescriptorMetadataWithError:(id *)a0;
- (id)_queue_fetchAllLegacyDescriptorMetadataWithError:(id *)a0;
- (id)_queue_homeScreenWidgetDescriptors;
- (BOOL)_queue_writeAllDescriptorMetadata:(id)a0 error:(id *)a1;
- (void)_scheduleCoalescedDescriptorUpdateOperation;
- (id)_updateAllDescriptorMetadataOnInternalQueue;
- (void)_updateDescriptorMappings;
- (id)fetchAccessoryWidgetDescriptorMetadataWithError:(id *)a0;
- (id)fetchHomeScreenWidgetDescriptorMetadataWithError:(id *)a0;
- (id)homeScreenDescriptorForContainerBundleId:(id)a0 widgetKind:(id)a1;
- (id)homeScreenDescriptorForExtensionBundleId:(id)a0 kind:(id)a1;
- (id)homeScreenDescriptorForIntent:(id)a0;
- (id)homeScreenDescriptorForWidget:(id)a0;
- (id)initWithCachePath:(id)a0 legacyCachePath:(id)a1;
- (id)initWithProvider:(id)a0 cachePath:(id)a1 legacyCachePath:(id)a2;

@end

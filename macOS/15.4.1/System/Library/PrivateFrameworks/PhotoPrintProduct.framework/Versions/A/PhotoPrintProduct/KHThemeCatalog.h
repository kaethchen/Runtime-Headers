@class KHCatalogBundle, NSArray, NSString, NSSet, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, KHThemeCatalogDelegate;

@interface KHThemeCatalog : NSObject {
    NSMutableSet *_originalThemeProviders;
    NSMutableArray *_themeProviderConfigsInFlightProgressHandlers;
    NSMutableArray *_themeProviderConfigsInFlight;
    NSMutableArray *_themeProviderConfigsDownloadPriorityQueue;
    NSMutableArray *_themeProviderConfigsWhichFailedToDownload;
    NSMutableDictionary *_allThemeProviderConfigs;
    NSMutableArray *_readyThemeProviderConfigs;
    NSArray *_completedThemeProviderConfigs;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property (copy, nonatomic) NSArray *categories;
@property (nonatomic) long long projectType;
@property BOOL allSourcesHaveReportedIn;
@property BOOL isLoading;
@property BOOL isCancelled;
@property (retain) NSSet *productCodes;
@property (readonly) unsigned long long numberOfItemsToDownloadSimultanously;
@property (readonly) KHCatalogBundle *catalogBundle;
@property (readonly) unsigned long long numberOfThemeProviderConfigs;
@property (readonly, copy) NSArray *readyThemeProviderConfigs;
@property (copy, nonatomic) NSString *currentCategory;
@property (copy, nonatomic) NSString *currentLanguageCode;
@property (copy, nonatomic) id /* block */ filter;
@property id<KHThemeCatalogDelegate> delegate;

+ (id /* block */)landscapeCardFilter;
+ (id /* block */)portraitCardFilter;

- (void).cxx_destruct;
- (void)cancel;
- (void)_enqueue:(id)a0;
- (void)_dequeue;
- (void)_checkIfDone;
- (void)_delegateBeginLoadingWithCompletedThemeConfigurations:(id)a0;
- (void)_delegateThemeCatalogDidChangeCategoryWithCompletedThemeConfigurations:(id)a0;
- (void)_delegateThemeCatalogDidChangeFilterWithCompletedThemeConfigurations:(id)a0;
- (void)_delegateThemeCatalogDidFinishLoadingWithCompletedThemeConfigurations:(id)a0;
- (void)_delegateThemeCatalogWasCancelled;
- (void)_delegateThemeProviderConfigFailedToLoad:(id)a0 error:(id)a1;
- (void)_delegateThemeProvidersAreReady:(id)a0 newlyReadyProviderIndicies:(id)a1 completedThemeProviders:(id)a2;
- (void)_resetInternalDataStructures;
- (void)_resetToFilter:(id /* block */)a0 category:(id)a1 withBlock:(id /* block */)a2;
- (void)_resetWithBlock:(id /* block */)a0;
- (void)_sortArray:(id)a0;
- (void)_themeProviderConfigsAreReady:(id)a0;
- (void)_themeProviderConfigsCompletedLoading:(id)a0 error:(id)a1;
- (id)allThemeProviderConfigs;
- (BOOL)beginLoading;
- (unsigned long long)indexForThemeProviderConfig:(id)a0;
- (id)initWithProjectType:(long long)a0 productCodes:(id)a1 themeProviders:(id)a2 catalogBundle:(id)a3;
- (unsigned long long)numberOfOperationInFlight;
- (unsigned long long)numberOfRemainingDownloadsInQueue;
- (void)reprioritizeDownloadQueueForIndicies:(id)a0;
- (id)themeProviderConfigAtIndex:(unsigned long long)a0;
- (id)themeProviderConfigurationsWithThemeIdentifier:(id)a0;
- (id)themeProviderConfigurationsWithThemePreviewIdentifier:(id)a0;

@end

@class ATXGenericFileBasedCache, ATXBiomeSuggestedHomePageStream, NSObject;
@protocol OS_dispatch_queue;

@interface ATXInstalledSuggestedPagesTracker : NSObject {
    ATXGenericFileBasedCache *_cache;
    NSObject<OS_dispatch_queue> *_queue;
    ATXBiomeSuggestedHomePageStream *_suggestedHomePageStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)_allInstalledPages;
- (void)_serializePages:(id)a0;
- (id)allInstalledPages;
- (id)identifierOfSuggestedPageForModeUUID:(id)a0;
- (void)removePagesWithIdentifiersNotInSet:(id)a0;
- (void)storePageIdentifier:(id)a0 modeUUID:(id)a1 forPageType:(long long)a2;
- (long long)suggestedPageTypeWithIdentifier:(id)a0;
- (void)trackSuggestedHomePageWithAction:(long long)a0 pageType:(long long)a1 identifier:(id)a2;

@end

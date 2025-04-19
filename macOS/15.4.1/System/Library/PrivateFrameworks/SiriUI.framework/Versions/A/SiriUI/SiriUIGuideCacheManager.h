@class SAGuidanceGuideSnippet, SAGuidanceSuggestedUtterances, SAGuidanceGuideUpdate, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface SiriUIGuideCacheManager : NSObject {
    SAGuidanceGuideUpdate *_cachedGuideUpdate;
    NSObject<OS_dispatch_queue> *_cacheFileQueue;
}

@property (readonly, nonatomic) NSNumber *cachedGuideTag;
@property (readonly, nonatomic) SAGuidanceGuideSnippet *cachedGuideSnippet;
@property (readonly, nonatomic) SAGuidanceSuggestedUtterances *cachedSuggestedUtterances;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_aceObjectDictionaryAtFilepath:(id)a0;
- (id)_cachedGuideUpdate;
- (id)_pathForCachedGuideUpdate;
- (BOOL)_shouldCheckForUpdateAtDate:(id)a0;
- (void)_updateLastCheckedWithDate:(id)a0;
- (void)clearCachedGuide;
- (BOOL)shouldCheckForUpdate;
- (void)updateCacheWithGuideUpdate:(id)a0 completion:(id /* block */)a1;
- (void)updateLastCheckedDate;

@end

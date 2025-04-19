@class NSString;
@protocol WBSSearchEnginePreferenceObserverDelegate, WBSSearchProviderContext;

@interface WBSSearchEnginePreferenceObserver : NSObject {
    id<WBSSearchProviderContext> _searchProviderContext;
}

@property (class, readonly, nonatomic) WBSSearchEnginePreferenceObserver *sharedObserver;

@property (weak, nonatomic) id<WBSSearchEnginePreferenceObserverDelegate> delegate;
@property (readonly, nonatomic) BOOL duckDuckGoDefaultSearchEngine;
@property (readonly, nonatomic) BOOL isABTestingEnabled;
@property (readonly, nonatomic) BOOL defaultSearchEngineMatchesExperiment;
@property (readonly, nonatomic) BOOL googleIsDefaultSearchEngine;
@property (readonly, nonatomic) BOOL isGoogleEnabledSearchEngine;
@property (readonly, copy, nonatomic) NSString *defaultSearchEngineShortName;

+ (void)setUpSharedObserverWithSearchProviderContext:(id)a0;

- (void).cxx_destruct;
- (void)_suppressSearchSuggestionsSettingDidChange:(id)a0;
- (void)_updateSearchEnginePreference:(id)a0;
- (id)initWithSearchProviderContext:(id)a0;

@end

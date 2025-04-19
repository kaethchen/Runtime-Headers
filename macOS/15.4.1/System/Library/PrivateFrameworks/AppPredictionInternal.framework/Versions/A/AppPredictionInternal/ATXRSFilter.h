@class _ATXAppLaunchHistogramManager;

@interface ATXRSFilter : NSObject {
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)_candidatesByUsingAppLaunchHistogramsToFilterCandidates:(id)a0;
- (id)filterCandidatesBySuggestionRequirements:(id)a0;
- (id)initWithAppLaunchHistogramManager:(id)a0;

@end

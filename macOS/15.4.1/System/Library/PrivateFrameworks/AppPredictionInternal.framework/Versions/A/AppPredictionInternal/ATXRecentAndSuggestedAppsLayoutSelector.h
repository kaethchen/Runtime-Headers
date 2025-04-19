@class BPSPublisher;

@interface ATXRecentAndSuggestedAppsLayoutSelector : ATXLayoutSelector {
    BPSPublisher *_appLaunchPublisher;
    double _recencyLookBackSeconds;
    unsigned long long _maxRecents;
}

- (void).cxx_destruct;
- (id)_accumulateRecentAppLaunchBundleIds;
- (id)_getATXProactiveSuggestionForRecentAppLaunch:(id)a0;
- (id)initWithSuggestionDeduplicator:(id)a0 hyperParameters:(id)a1 maxRecents:(unsigned long long)a2 recencyLookBackSeconds:(double)a3;
- (id)initWithSuggestionDeduplicator:(id)a0 hyperParameters:(id)a1 maxRecents:(unsigned long long)a2 recencyLookBackSeconds:(double)a3 appLaunchPublisher:(id)a4;
- (id)recencyCutOffDate;
- (id)validLayoutsForConsumerSubType:(unsigned char)a0 rankedSuggestions:(id)a1;

@end

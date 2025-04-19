@interface NCSummarizationChinSuggestionManager : NSObject {
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ recordManager;
    void /* unknown type, empty encoding */ secondsBeforeStopShowingChinSuggestionWithoutEngagement;
    void /* unknown type, empty encoding */ secondsBeforeStartShowingChinSuggestionAfterFirstSummary;
    void /* unknown type, empty encoding */ secondsBeforeStartShowingChinSuggestionForNextApp;
    void /* unknown type, empty encoding */ alwaysShowChinSuggestion;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithIgnore:(BOOL)a0;
- (void)recordEvent:(unsigned long long)a0 bundleId:(id)a1;
- (BOOL)shouldShowChinSuggestionAfterStackSummaryShownForBundleId:(id)a0;

@end

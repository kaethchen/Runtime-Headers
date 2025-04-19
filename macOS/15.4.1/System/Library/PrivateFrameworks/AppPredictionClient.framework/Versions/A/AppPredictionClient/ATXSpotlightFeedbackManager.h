@class ATXEngagementRecordManager, NSString;

@interface ATXSpotlightFeedbackManager : NSObject {
    ATXEngagementRecordManager *_engagementRecordManager;
    NSString *_clientModelId;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)combineReasons:(unsigned long long)a0;
- (void)_toggleSiriSearchSettingsOffForAppSuggestion:(id)a0;
- (void)addHiddenActionExecutableIdentifier:(id)a0;
- (void)addHiddenAppSuggestionBundleIdentifier:(id)a0;
- (void)addHiddenAutoShortcutIdentifier:(id)a0;
- (void)addHiddenContextIdentifier:(id)a0;
- (BOOL)autoShortcutHasBeenHiddenForIdentifier:(id)a0;
- (void)clearHiddenSuggestions;
- (BOOL)contextHasBeenHiddenForContextIdentifier:(id)a0;
- (BOOL)contextHasBeenHiddenForSuggestion:(id)a0;
- (BOOL)hasBeenHiddenEntityWithIdentifier:(id)a0;
- (BOOL)hasBeenHiddenSuggestion:(id)a0;
- (id)initWithEngagementRecordManager:(id)a0;

@end

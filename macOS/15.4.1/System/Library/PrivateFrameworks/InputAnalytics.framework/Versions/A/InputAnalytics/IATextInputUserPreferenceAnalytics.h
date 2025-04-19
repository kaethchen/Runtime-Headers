@interface IATextInputUserPreferenceAnalytics : NSObject

- (id)init;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)reportStateForUserPreference:(long long)a0;
- (void)reportStateForUserPreferences:(id)a0;

@end

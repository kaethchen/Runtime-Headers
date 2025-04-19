@interface IASTextInputUserPreferenceServer : NSObject

@property (copy, nonatomic) id /* block */ eventHandler;
@property (nonatomic) BOOL readyToReportPreferenceToEventHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)dispatchUserPreference:(long long)a0 withValue:(long long)a1;
- (void)reportStateForUserPreference:(long long)a0;
- (long long)retrieveStandardBooleanPreference:(id)a0;

@end

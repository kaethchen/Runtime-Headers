@class NSString;

@interface IASTextInputUserPreferenceStateEvent : NSObject <IATelemetryEvent>

@property (copy, nonatomic) NSString *preferenceName;
@property (nonatomic) long long preferenceValue;

- (void).cxx_destruct;
- (void)dispatchEvent:(id /* block */)a0;
- (BOOL)isDispatchable;
- (void)resetMeasures;

@end

@class BMClockAlarm, NSString;

@interface SearchUIAlarmBiomeEvent : SearchUIBiomeEvent

@property (retain, nonatomic) BMClockAlarm *biomeEvent;
@property (retain, nonatomic) NSString *observedAlarmIdentifier;

+ (BOOL)supportsEvent:(id)a0 contextualAction:(id)a1;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 contextualAction:(id)a1;
- (void)getEnabledStatusWithCompletion:(id /* block */)a0;

@end

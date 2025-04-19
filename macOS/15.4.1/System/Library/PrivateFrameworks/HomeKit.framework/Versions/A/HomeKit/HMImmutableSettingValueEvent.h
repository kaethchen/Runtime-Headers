@class HMImmutableSettingValue;

@interface HMImmutableSettingValueEvent : HMEEvent

@property (readonly, nonatomic) HMImmutableSettingValue *settingValue;

+ (id)decodeSettingValueFromEvent:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)encodedData;
- (id)initSettingValue:(id)a0 eventSource:(id)a1 eventTimestamp:(double)a2;

@end

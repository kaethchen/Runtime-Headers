@class HMImmutableSetting;

@interface HMImmutableSettingChangeEvent : HMEEvent

@property (readonly, nonatomic) HMImmutableSetting *setting;

+ (id)decodeSettingFromEvent:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)encodedData;
- (id)initWithSetting:(id)a0 eventSource:(id)a1 eventTimestamp:(double)a2;

@end

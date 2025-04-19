@class NSSet, NSString;

@interface _GCDevicePhysicalInputCapacitiveButtonElement : _GCDevicePhysicalInputButtonElement <GCTouchedStateInput> {
    unsigned long long _touchedThresholdSlot;
    unsigned long long _touchedValueFieldSlot;
    unsigned long long _touchedChangedHandlerSlot;
    unsigned long long _touchedValueSlot;
    unsigned long long _touchedTimestampSlot;
}

@property (copy) id /* block */ touchedDidChangeHandler;
@property (readonly, getter=isTouched) BOOL touched;
@property (readonly) double lastTouchedStateTimestamp;
@property (readonly) double lastTouchedStateLatency;
@property (readonly, copy) NSSet *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)updateContextSize;

- (id)initWithParameters:(id)a0;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)postCommit:(const void *)a0 sender:(id)a1;
- (void)preCommit:(const void *)a0 sender:(id)a1;
- (id)touchedInput;
- (BOOL)update:(void *)a0 forGamepadEvent:(id)a1 withTimestamp:(double)a2;
- (BOOL)update:(void *)a0 forUsages:(unsigned long long)a1 with:(id)a2;

@end

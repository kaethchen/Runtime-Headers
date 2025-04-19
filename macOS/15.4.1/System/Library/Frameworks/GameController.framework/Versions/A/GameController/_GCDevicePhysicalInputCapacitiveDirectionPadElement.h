@interface _GCDevicePhysicalInputCapacitiveDirectionPadElement : _GCDevicePhysicalInputClickableDirectionPadElement {
    unsigned long long _touchedValueFieldSlot;
    unsigned long long _touchedInputSlot;
}

+ (unsigned short)updateContextSize;

- (id)description;
- (id)initWithParameters:(id)a0;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)postCommit:(const void *)a0 sender:(id)a1;
- (void)preCommit:(const void *)a0 sender:(id)a1;
- (id)touchedInput;
- (BOOL)update:(void *)a0 forGamepadEvent:(id)a1 withTimestamp:(double)a2;
- (BOOL)update:(void *)a0 forUsages:(unsigned long long)a1 with:(id)a2;

@end

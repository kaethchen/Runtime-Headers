@class NSSet, NSString;

@interface _GCDevicePhysicalInputTouchedStateInput : _GCDevicePhysicalInputView <GCTouchedStateInput> {
    unsigned long long _sourcesSlot;
    unsigned long long _touchedChangedHandlerSlot;
    unsigned long long _touchedSlot;
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

- (id)init;
- (id)initWithParameters:(id)a0;
- (BOOL)_setTouchedDidChangeHandler:(id /* block */)a0;
- (id /* block */)_touchedDidChangeHandler;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (void)postCommit:(const void *)a0 sender:(id)a1;
- (void)preCommit:(const void *)a0 sender:(id)a1;
- (BOOL)update:(void *)a0 forUsages:(unsigned long long)a1 with:(id)a2;

@end

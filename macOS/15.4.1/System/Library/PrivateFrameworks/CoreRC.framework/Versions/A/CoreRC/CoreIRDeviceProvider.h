@class NSDictionary, NSMutableSet;

@interface CoreIRDeviceProvider : CoreIRDevice {
    NSMutableSet *_commandMappings;
    struct { unsigned int matchIndex; unsigned long long *commandArray; unsigned long long commandCount; unsigned long long *repeatArray; unsigned long long repeatCount; unsigned long long command; } _buttonArray[18];
    unsigned long long _buttonCount;
    unsigned long long _lastCommandTimestamp;
    const struct { unsigned int x0; unsigned long long *x1; unsigned long long x2; unsigned long long *x3; unsigned long long x4; unsigned long long x5; } *_lastButtonPressed;
    unsigned long long _pressAndHoldTimeoutGenerationCount;
}

@property (copy, nonatomic) NSDictionary *persistentProperties;
@property (copy, nonatomic) NSDictionary *matchingDict;
@property (readonly, nonatomic) unsigned int protocolMask;

+ (void)load;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)interface;
- (id)persistentProperties;
- (void)setPersistentProperties:(id)a0;
- (BOOL)sendCommand:(id)a0 error:(id *)a1;
- (BOOL)updateMappingWithSession:(id)a0 error:(id *)a1;
- (struct { unsigned int x0; unsigned long long *x1; unsigned long long x2; unsigned long long *x3; unsigned long long x4; unsigned long long x5; } *)_findButtonWithCommand:(unsigned long long)a0;
- (void)_removeMappingForCommand:(unsigned long long)a0;
- (int)_setInfraredCommandPattern:(id)a0 repeatPattern:(id)a1 forCommand:(unsigned long long)a2;
- (id)busProvider;
- (void)cancelPressAndHoldTimer;
- (BOOL)clearAllStoredCommands:(id *)a0;
- (BOOL)disableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (BOOL)dispatchButtonEventWithCommand:(unsigned long long)a0 pressed:(BOOL)a1 timestamp:(unsigned long long)a2 toDevice:(id)a3;
- (BOOL)dispatchEventForCommand:(id)a0 matchingButton:(const struct { unsigned int x0; unsigned long long *x1; unsigned long long x2; unsigned long long *x3; unsigned long long x4; unsigned long long x5; } *)a1 timestamp:(unsigned long long)a2 toDevice:(id)a3;
- (BOOL)dispatchEventsForCommand:(id)a0 toDevice:(id)a1;
- (BOOL)enableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (id)extendedPropertyForKey:(id)a0 error:(id *)a1;
- (unsigned long long)findDuplicateIRCommand:(id)a0 forCommand:(unsigned long long)a1 device:(id *)a2;
- (void)handleIRCommand:(id)a0;
- (id)infraredCommandForCommand:(unsigned long long)a0;
- (id)initWithBus:(id)a0 local:(BOOL)a1 deviceType:(unsigned long long)a2;
- (id)learningSessionProvider;
- (void)schedulePressAndHoldTimer;
- (BOOL)sendCommand:(unsigned long long)a0 target:(id)a1 withDuration:(unsigned long long)a2 error:(id *)a3;
- (BOOL)sendHIDEvent:(id)a0 target:(id)a1 error:(id *)a2;
- (BOOL)setCommand:(unsigned long long)a0 target:(id)a1 forButtonCombination:(id)a2 delay:(double)a3 error:(id *)a4;
- (BOOL)setExtendedProperty:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)setInfraredCommand:(id)a0 forCommand:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setMappingWithSession:(id)a0 error:(id *)a1;
- (BOOL)setOSDName:(id)a0 error:(id *)a1;
- (id)startLearningSessionWithReason:(unsigned long long)a0 error:(id *)a1;
- (void)synthesizeButtonReleaseWithTimestamp:(unsigned long long)a0;

@end

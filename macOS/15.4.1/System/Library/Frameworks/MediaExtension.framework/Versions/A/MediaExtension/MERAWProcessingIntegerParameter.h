@interface MERAWProcessingIntegerParameter : MERAWProcessingParameter {
    long long _neutralValue;
    long long _cameraValue;
    BOOL _hasCameraValue;
    BOOL _hasNeutralValue;
}

@property (readonly) long long maximumValue;
@property (readonly) long long minimumValue;
@property (readonly) long long initialValue;
@property long long currentValue;

- (BOOL)hasCameraValue:(long long *)a0;
- (BOOL)hasNeutralValue:(long long *)a0;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(long long)a3 maximum:(long long)a4 minimum:(long long)a5;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(long long)a3 maximum:(long long)a4 minimum:(long long)a5 cameraValue:(long long)a6;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(long long)a3 maximum:(long long)a4 minimum:(long long)a5 neutralValue:(long long)a6;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(long long)a3 maximum:(long long)a4 minimum:(long long)a5 neutralValue:(long long)a6 cameraValue:(long long)a7;

@end

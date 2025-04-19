@class NSArray;

@interface MERAWProcessingListParameter : MERAWProcessingParameter {
    long long _neutralValue;
    long long _cameraValue;
    BOOL _hasCameraValue;
    BOOL _hasNeutralValue;
}

@property (readonly) NSArray *listElements;
@property (readonly) long long initialValue;
@property long long currentValue;

- (void).cxx_destruct;
- (BOOL)hasCameraValue:(long long *)a0;
- (BOOL)hasNeutralValue:(long long *)a0;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 list:(id)a3 initialValue:(long long)a4;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 list:(id)a3 initialValue:(long long)a4 cameraValue:(long long)a5;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 list:(id)a3 initialValue:(long long)a4 neutralValue:(long long)a5;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 list:(id)a3 initialValue:(long long)a4 neutralValue:(long long)a5 cameraValue:(long long)a6;

@end

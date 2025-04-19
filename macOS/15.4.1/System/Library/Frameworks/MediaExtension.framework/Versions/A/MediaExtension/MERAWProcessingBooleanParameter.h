@interface MERAWProcessingBooleanParameter : MERAWProcessingParameter {
    BOOL _neutralValue;
    BOOL _cameraValue;
    BOOL _hasCameraValue;
    BOOL _hasNeutralValue;
}

@property (readonly) BOOL initialValue;
@property BOOL currentValue;

- (BOOL)hasCameraValue:(BOOL *)a0;
- (BOOL)hasNeutralValue:(BOOL *)a0;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(BOOL)a3;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(BOOL)a3 cameraValue:(BOOL)a4;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(BOOL)a3 neutralValue:(BOOL)a4;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(BOOL)a3 neutralValue:(BOOL)a4 cameraValue:(BOOL)a5;

@end

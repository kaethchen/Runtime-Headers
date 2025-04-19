@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement {
    float _minValue;
    float _maxValue;
}

@property (nonatomic) float value;
@property (retain, nonatomic) GCControllerButtonInput *positive;
@property (retain, nonatomic) GCControllerButtonInput *negative;
@property (nonatomic, getter=isHorizontal) BOOL horizontal;
@property (copy, nonatomic) id /* block */ valueChangedHandler;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)localizedName;
- (id)initWithCollection:(id)a0;
- (float)maxValue;
- (float)minValue;
- (BOOL)_setValue:(float)a0;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (int)getAndResetTimesPressed;
- (id)initWithCollection:(id)a0 horizontal:(BOOL)a1;
- (BOOL)isAnalog;
- (void)setMinValue:(float)a0 andMaxValue:(float)a1;
- (id)unmappedLocalizedName;

@end

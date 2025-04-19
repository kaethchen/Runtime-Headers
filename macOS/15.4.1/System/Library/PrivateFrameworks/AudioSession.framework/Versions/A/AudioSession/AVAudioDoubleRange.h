@interface AVAudioDoubleRange : NSObject

@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;

- (id)description;
- (id)initWithRange:(struct SampleRateRange { void /* function */ **x0; unsigned int x1[1]; double x2; double x3; })a0;
- (id)initWithMin:(double)a0 max:(double)a1;

@end

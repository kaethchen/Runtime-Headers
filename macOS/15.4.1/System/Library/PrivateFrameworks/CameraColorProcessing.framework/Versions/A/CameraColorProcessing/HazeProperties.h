@interface HazeProperties : NSObject

@property (nonatomic) float ispRes;
@property (nonatomic) float evmExpRatio;
@property (nonatomic) float evtBkt;
@property (nonatomic) float reluC1;
@property (nonatomic) float reluC2;
@property (nonatomic) float reluC3;
@property (nonatomic) float reluC4;
@property (nonatomic) float reluC5;
@property (nonatomic) float min_display_black;
@property (nonatomic) float sr_min;
@property (nonatomic) float sr_var;
@property (nonatomic) float sr_pow;
@property (nonatomic) float sr_sat;
@property (nonatomic) float maxHazePercentile;

- (id)init;
- (void)setData:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; } *)a0;
- (void)reset;
- (struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; })getData;

@end

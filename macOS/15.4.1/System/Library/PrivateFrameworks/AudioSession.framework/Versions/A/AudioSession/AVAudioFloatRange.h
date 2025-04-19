@interface AVAudioFloatRange : NSObject

@property (readonly, nonatomic) float minimum;
@property (readonly, nonatomic) float maximum;

- (id)description;
- (id)initWithMin:(float)a0 max:(float)a1;

@end

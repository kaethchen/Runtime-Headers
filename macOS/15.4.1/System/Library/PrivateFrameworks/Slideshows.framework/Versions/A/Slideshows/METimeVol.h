@interface METimeVol : NSObject

@property (readonly) float time;
@property (readonly) float volume;

- (BOOL)hasVolume;
- (id)initWithTime:(float)a0;
- (id)initWithTime:(float)a0 andVolume:(float)a1;

@end

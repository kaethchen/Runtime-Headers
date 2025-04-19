@interface AVMutableValueTiming : AVValueTiming

@property double anchorValue;
@property double anchorTimeStamp;
@property double rate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (Class)classForCoder;
- (void)setRate:(double)a0;
- (void)setValueTiming:(id)a0;
- (void)setAnchorValue:(double)a0;
- (void)setAnchorTimeStamp:(double)a0;

@end

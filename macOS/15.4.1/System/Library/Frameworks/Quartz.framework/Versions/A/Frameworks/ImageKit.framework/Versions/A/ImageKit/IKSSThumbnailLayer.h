@class CALayer;

@interface IKSSThumbnailLayer : CALayer

@property BOOL invalidated;
@property CALayer *spinner;
@property unsigned long long index;

- (id)init;
- (void)setContents:(id)a0;
- (void)addSpinnerWithProgressAnimation:(id)a0;
- (void)removeSpinner;

@end

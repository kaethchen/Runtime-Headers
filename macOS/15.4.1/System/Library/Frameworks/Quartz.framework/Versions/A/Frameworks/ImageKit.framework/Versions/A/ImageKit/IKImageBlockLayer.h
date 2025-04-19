@class CALayer;

@interface IKImageBlockLayer : CALayer

@property (retain) CALayer *maskTile;

- (void)dealloc;
- (double)contentsScale;

@end

@class CABackdropLayer;

@interface BackdropView : NSView

@property (readonly, nonatomic) CABackdropLayer *backdropLayer;

- (id)makeBackingLayer;

@end

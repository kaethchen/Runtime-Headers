@class VFXView;

@interface VFXMetalBackingLayer : CAMetalLayer

@property (nonatomic) VFXView *parentView;

- (void)setContentsGravity:(id)a0;

@end

@interface AVControlsPresentationContext : NSObject

@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) BOOL controlsAreVisible;

- (id)_initAVInternal;

@end

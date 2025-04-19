@class NSView, NSString;

@interface VUINSNavigationPaletteView : NSView <VUINSNavigationBarVisibilityThresholdProviding>

@property (retain, nonatomic) NSView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })fittingSize;
- (BOOL)isFlipped;
- (double)visibilityThreshold;

@end

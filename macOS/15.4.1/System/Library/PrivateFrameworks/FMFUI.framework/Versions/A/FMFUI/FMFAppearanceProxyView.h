@class NSString;
@protocol FMFAppearanceDelegate;

@interface FMFAppearanceProxyView : NSView

@property (copy, nonatomic) NSString *previousAppearanceName;
@property (weak, nonatomic) id<FMFAppearanceDelegate> appearanceDelegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;

@end

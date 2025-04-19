@class CAGradientLayer, NSString, NSImage, CALayer, CNCache;

@interface CNContactSilhouetteView : NSView <CNContactIconUpdating>

@property (retain) NSImage *placeholderImage;
@property (retain) CALayer *silhouetteLayer;
@property (retain) CAGradientLayer *gradientLayer;
@property BOOL selected;
@property (retain) CNCache *silhouetteCache;
@property long long contactType;
@property unsigned long long cropStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implicitAnimatedActionsToDisable;
+ (id)companyImageNameForDiameter:(double)a0;
+ (id)silhouetteImageNameForDiameter:(double)a0;
+ (id)companyTemplateImageSqare;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)setCircular:(BOOL)a0;
- (id)companyImageForDiameter:(double)a0;
- (id)silhouetteImageForDiameter:(double)a0;
- (void)viewModelDidUpdate:(id)a0;

@end

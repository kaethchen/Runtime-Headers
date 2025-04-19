@class NSView;
@protocol AVAuxiliaryControlsViewItem;

@interface AVAuxiliaryControl : NSObject

@property (readonly, nonatomic) NSView<AVAuxiliaryControlsViewItem> *controlView;
@property (readonly, nonatomic) float displayPriority;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (readonly, nonatomic, getter=isIncluded) BOOL included;
@property (nonatomic) BOOL canOnlyAppearInOverflowMenu;
@property (nonatomic, getter=isDisplayed) BOOL displayed;
@property (nonatomic, getter=isAnimating) BOOL animating;

+ (struct CGSize { double x0; double x1; })_preferredSizeForView:(id)a0;
+ (id)auxiliaryControlForView:(id)a0 withDisplayPriority:(float)a1;
+ (id)keyPathsForValuesAffectingIncluded;

- (void).cxx_destruct;
- (BOOL)isVisible;

@end

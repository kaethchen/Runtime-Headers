@class AKBezelFreeButton_Mac, NSVisualEffectView;

@interface AKGridViewBox : NSView

@property (nonatomic) BOOL lastItem;
@property BOOL showsSelectionState;
@property (nonatomic) BOOL transparent;
@property (readonly, nonatomic) NSVisualEffectView *selectionIndicator;
@property (readonly, nonatomic) AKBezelFreeButton_Mac *button;

@end

@class NSPopover, NSArray, MMInfoCapacityPopoverViewController, NSDictionary, CALayer, NSMutableArray, NSLayoutConstraint;

@interface MMInfoCapacityBarView : NSView

@property (retain, nonatomic) NSMutableArray *categories;
@property (retain) CALayer *backgroundLayer;
@property (retain) CALayer *foregroundLayer;
@property (retain) CALayer *maskLayer;
@property (retain) CALayer *itemsContainerLayer;
@property (retain) NSArray *itemTrackingAreas;
@property (retain) NSLayoutConstraint *minimumWidthLayoutConstraint;
@property (retain) NSLayoutConstraint *requiredHeightLayoutConstraint;
@property (retain) NSPopover *toolTipPopover;
@property (retain) MMInfoCapacityPopoverViewController *toolTipPopoverViewController;
@property unsigned long long capacity;
@property (nonatomic, setter=setQuotaInfoDictionary:) NSDictionary *quotaDictionary;

- (void).cxx_destruct;
- (void)layout;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isVoiceOverEnabled;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0;
- (void)updateConstraints;
- (void)updateLayer;
- (void)updateTrackingAreas;
- (BOOL)wantsUpdateLayer;
- (void)addCategoryWithDictionary:(id)a0 atIndex:(unsigned long long)a1;
- (void)createPopover;
- (void)initCategories;
- (void)resetValues;

@end

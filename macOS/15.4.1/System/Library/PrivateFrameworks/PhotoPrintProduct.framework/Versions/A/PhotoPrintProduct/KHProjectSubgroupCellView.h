@class NSImageView, NSTextField, NSView, NSString, NSMutableArray;

@interface KHProjectSubgroupCellView : NSTableCellView <NSAccessibilityRow>

@property (readonly, nonatomic) NSView *labelContainer;
@property (readonly, nonatomic) NSMutableArray *contentConstraints;
@property (readonly, nonatomic) NSImageView *thumbnailView;
@property (readonly, nonatomic) NSTextField *titleLabel;
@property (readonly, nonatomic) NSTextField *subtitleLabel;
@property (readonly, nonatomic) NSTextField *amountLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })thumbnailSize;
+ (id)newLabel;

- (void).cxx_destruct;
- (long long)accessibilityIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)updateConstraints;

@end

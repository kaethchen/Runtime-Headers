@class NSTextField, NSString, NSImage, NSImageView, NSShadow, AVVerticallyCenteredTextFieldCell, NSArray;

@interface AVDesktopHighlightedTimeRangeDescriptionView : NSView {
    NSTextField *_descriptionLabel;
    NSImageView *_iconView;
    NSShadow *_shadow;
    AVVerticallyCenteredTextFieldCell *_descriptionLabelVerticallyCenteredCell;
    NSArray *_iconConstraints;
    NSArray *_labelConstraints;
}

@property (retain, nonatomic) NSImage *icon;
@property (retain, nonatomic) NSString *label;

+ (id)defaultLabel;
+ (id)defaultIcon;

- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (id)initWithLabelText:(id)a0;
- (id)initWithLabelText:(id)a0 icon:(id)a1;

@end

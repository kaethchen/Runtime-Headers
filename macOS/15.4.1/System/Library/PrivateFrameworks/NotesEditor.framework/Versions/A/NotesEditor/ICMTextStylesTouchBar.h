@class NSArray, NSView, NSIndexSet, NSButton;
@protocol ICMTextStylesTouchBarDelegate;

@interface ICMTextStylesTouchBar : NSTouchBar

@property (weak, nonatomic) NSView *view;
@property (retain, nonatomic) NSArray *allButtons;
@property (weak, nonatomic) id<ICMTextStylesTouchBarDelegate> textStylesDelegate;
@property (retain, nonatomic) NSIndexSet *selectedStyles;
@property (weak, nonatomic) NSButton *titleButton;
@property (weak, nonatomic) NSButton *headingButton;
@property (weak, nonatomic) NSButton *subHeadingButton;
@property (weak, nonatomic) NSButton *bodyButton;
@property (weak, nonatomic) NSButton *monospaceButton;
@property (weak, nonatomic) NSButton *bulletButton;
@property (weak, nonatomic) NSButton *dashButton;
@property (weak, nonatomic) NSButton *numberedButton;
@property (weak, nonatomic) NSButton *blockQuoteButton;

+ (id)newTouchBar;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)buttonPressed:(id)a0;
- (id)buttonSafeAttributesForStyle:(id)a0;
- (void)setTitleAttributesForButton:(id)a0;

@end

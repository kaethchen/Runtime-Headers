@class NSImageView, NSTextField, NSBox, NSString, NSButton;

@interface AKAuthorizationLoginChoiceView : NSView

@property (retain, nonatomic) NSButton *radioButton;
@property (retain, nonatomic) NSImageView *cellIcon;
@property (retain, nonatomic) NSTextField *userField;
@property (retain, nonatomic) NSTextField *descField;
@property (retain, nonatomic) NSBox *topBorder;
@property (retain, nonatomic) NSBox *bottomBorder;
@property (retain, nonatomic) NSString *user;
@property (retain, nonatomic) NSString *choiceDescription;
@property (nonatomic) long long internalTagIdentifier;
@property (nonatomic) BOOL enabled;
@property (nonatomic) long long tagIdentifier;
@property (retain, nonatomic) NSImageView *sharedIconImageView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (id)initWithLoginChoice:(id)a0 withImage:(id)a1 formatType:(long long)a2 shouldShowRadioButton:(BOOL)a3;
- (void)_addBottomBorder;
- (void)_addDescFieldForLoginChoice:(id)a0;
- (void)_addIconForLoginChoice:(id)a0 withImage:(id)a1;
- (void)_addLabelForUsername:(id)a0;
- (void)_addMiddleBorder;
- (void)_addRadioButton:(BOOL)a0;
- (void)_addTopBorder;
- (void)_setupBordersWithFormatType:(long long)a0;
- (void)_setupSharedIconImageView;
- (id)initWithLoginChoice:(id)a0 withImage:(id)a1 formatType:(long long)a2;

@end

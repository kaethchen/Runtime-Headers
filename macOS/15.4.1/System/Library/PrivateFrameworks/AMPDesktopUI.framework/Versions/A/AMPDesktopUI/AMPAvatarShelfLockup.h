@class NSButton, NSString, NSLayoutConstraint, NSStackView, NSLayoutDimension;
@protocol AMPAvatarShelfLockupModel;

@interface AMPAvatarShelfLockup : AMPBindableView <NSAccessibilityGroup>

@property (retain, nonatomic) NSStackView *avatarContainer;
@property (retain, nonatomic) NSLayoutDimension *columnWidthDimension;
@property (retain, nonatomic) NSLayoutConstraint *columnWidthConstraint;
@property (retain, nonatomic) NSButton *sectionHeader;
@property (retain, nonatomic) id<AMPAvatarShelfLockupModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesInvalidatingConstraints;
+ (id)lockup;
+ (long long)columnCountForWidth:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilityLabel;
- (void)commonInit;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateConstraints;
- (double)currentColumnWidth;
- (void)reflectHeaderAction:(id)a0;
- (void)updateRolloverStates:(struct CGPoint { double x0; double x1; })a0;

@end

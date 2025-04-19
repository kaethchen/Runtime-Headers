@class NSButtonGroupTouchBarItem, NSString, NSLayoutConstraint, NSMutableArray;

@interface _NSTouchBarButtonsStackView : NSStackView <_NSTouchBarItemLayoutWrapper> {
    double _maxWidth;
}

@property (weak) NSButtonGroupTouchBarItem *groupTouchBarItem;
@property (retain) NSLayoutConstraint *desiredWidthConstraint;
@property (retain) NSMutableArray *preferredWidthConstraints;
@property (retain) NSMutableArray *equalWidthConstraints;
@property (retain) NSMutableArray *adjustableButtons;
@property (retain) NSMutableArray *popoverItems;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) BOOL isSpace;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) long long priorityIndex;
@property (readonly) unsigned long long itemPosition;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) BOOL participatesInOverflow;
@property (readonly) BOOL isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_buttonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3 preferredWidth:(double)a4 isAlertButton:(BOOL)a5;
+ (id)makeAlertButtonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3;
+ (id)makeButtonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3 preferredWidth:(double)a4;
+ (id)makePopoverItemWithIdentifier:(id)a0 popoverTouchBar:(id)a1 title:(id)a2 image:(id)a3 preferredWidth:(double)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)_removeSubview:(id)a0;
- (BOOL)_buttonsFitFullTitles;
- (BOOL)_buttonsFitShortTitles;
- (unsigned long long)_compressedImagePosition;
- (void)_removeConstraintsForView:(id)a0;
- (void)_removeConstraintsForView:(id)a0 fromConstraints:(id)a1;
- (void)_setButtonsWithFullTitles;
- (void)_setButtonsWithShortTitles;
- (void)_setButtonsWithShortTitlesCompressedImage;
- (id)initWithBarItem:(id)a0;
- (void)insertPopover:(id)a0 atIndex:(long long)a1;
- (void)insertView:(id)a0 atIndex:(long long)a1;
- (void)resetButtons;
- (void)resetLayout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateButtons;

@end

@interface NSButtonGroupTouchBarItem : NSCustomTouchBarItem {
    unsigned long long _compressionOption;
    unsigned long long _defaultButtonImagePosition;
    double _preferredButtonWidth;
}

@property (readonly) long long viewCount;
@property unsigned long long compressionOption;
@property unsigned long long defaultButtonImagePosition;
@property double preferredButtonWidth;
@property double buttonSpacing;

+ (id)makeAlertButtonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3;
+ (id)makeButtonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3;
+ (id)makeButtonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3 preferredWidth:(double)a4;
+ (id)makePopoverItemWithIdentifier:(id)a0 popoverTouchBar:(id)a1 title:(id)a2 image:(id)a3;
+ (id)makePopoverItemWithIdentifier:(id)a0 popoverTouchBar:(id)a1 title:(id)a2 image:(id)a3 preferredWidth:(double)a4;

- (id)initWithIdentifier:(id)a0;
- (void)addPopoverItem:(id)a0;
- (void)addView:(id)a0;
- (void)insertPopoverItem:(id)a0 atIndex:(long long)a1;
- (void)insertView:(id)a0 atIndex:(long long)a1;
- (void)removeView:(id)a0;
- (void)resetLayout;

@end

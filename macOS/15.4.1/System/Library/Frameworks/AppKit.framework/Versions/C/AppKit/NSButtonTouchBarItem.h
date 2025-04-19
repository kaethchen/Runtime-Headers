@class NSString, NSImage, NSButton, NSColor;

@interface NSButtonTouchBarItem : NSTouchBarItem {
    NSButton *_button;
    NSImage *_image;
    NSString *_customizationLabel;
}

@property (copy) NSString *title;
@property (retain) NSImage *image;
@property (copy) NSColor *bezelColor;
@property (weak) id target;
@property SEL action;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *customizationLabel;

+ (id)buttonTouchBarItemWithIdentifier:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3;
+ (id)buttonTouchBarItemWithIdentifier:(id)a0 title:(id)a1 image:(id)a2 target:(id)a3 action:(SEL)a4;
+ (id)buttonTouchBarItemWithIdentifier:(id)a0 title:(id)a1 target:(id)a2 action:(SEL)a3;
+ (id)systemCloseButtonItemWithTarget:(id)a0 action:(SEL)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)view;
- (void)_performAction;
- (void)_setDisplayImage:(id)a0;
- (void)_updateTitleAndImageConfiguration;

@end

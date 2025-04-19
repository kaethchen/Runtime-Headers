@class NSButton;

@interface ButtonFunctionBarItem : NSCustomTouchBarItem

@property (readonly, nonatomic) NSButton *button;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 button:(id)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 image:(id)a2 target:(id)a3 action:(SEL)a4;
- (void)setAccessibilityTitleAndCustomizationLabel:(id)a0;

@end

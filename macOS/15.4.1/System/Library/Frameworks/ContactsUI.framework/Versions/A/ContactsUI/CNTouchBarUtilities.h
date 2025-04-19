@interface CNTouchBarUtilities : NSObject

+ (id)buttonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3;
+ (id)stackView;
+ (void)applyTintToButton:(id)a0 tint:(id)a1;
+ (id)buttonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3 size:(double)a4;
+ (id)doneButtonItemWithTarget:(id)a0 action:(SEL)a1;
+ (id)expandingButtonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3 size:(double)a4;
+ (id)itemWithIdentifier:(id)a0 view:(id)a1;
+ (void)removeTintFromButton:(id)a0;
+ (id)scrollViewWithView:(id)a0;
+ (id)touchBarAppearance;

@end

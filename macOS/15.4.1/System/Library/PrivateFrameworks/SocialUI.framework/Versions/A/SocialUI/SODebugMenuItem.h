@class SODebugMenu, NSMenuItem;

@interface SODebugMenuItem : NSObject

@property (readonly) NSMenuItem *menuItem;
@property (weak) id target;
@property SEL action;
@property SEL validate;
@property (weak) SODebugMenu *parent;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isChecked) BOOL checked;
@property (retain) id representedObject;

+ (id)menuItem;
+ (id)menuItemWithTitle:(id)a0;
+ (id)menuItemWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 validate:(SEL)a3 keyEquivalent:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)setMenuItem:(id)a0;
- (void)update;
- (BOOL)validateMenuItem:(id)a0;
- (void)handleMenuAction:(id)a0;
- (id)initWithTitle:(id)a0 keyEquivalent:(id)a1;
- (id)initWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 validate:(SEL)a3 keyEquivalent:(id)a4;
- (BOOL)isResponsibleForMenuItem:(id)a0;

@end

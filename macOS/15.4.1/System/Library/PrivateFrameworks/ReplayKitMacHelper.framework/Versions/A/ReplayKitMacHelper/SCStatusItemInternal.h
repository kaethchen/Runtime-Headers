@class NSString, NSStatusItem, NSMenu;

@interface SCStatusItemInternal : NSObject <SCCatalystStatusItem> {
    NSStatusItem *_statusItem;
    NSMenu *_menu;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeMenu;
- (void)addMenuItemWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 representedObject:(id)a3 keyEquivalent:(id)a4;
- (id)initWithImageName:(id)a0 fromBundle:(id)a1 scale:(double)a2;
- (void)removeFromStatusBar;
- (id)representedObjectFromSender:(id)a0;
- (void)setButtonTarget:(id)a0 buttonAction:(SEL)a1;

@end

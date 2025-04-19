@class NSString, NSMenu, NSMenuItem;

@interface NSDebugMenuUserDefaultsProvider : NSObject <NSMenuDelegate, NSDebugMenuItemProvider> {
    NSMenuItem *_defaultsMenuItem;
    NSMenu *_defaultsMenu;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSMenuItem *menuItem;

+ (id)_userDefaultControllers;
+ (void)registerUserDefaultController:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (void)_defaultControllersDidChange:(id)a0;
- (id)defaultsMenuCreateIfNecessary;
- (BOOL)menuHasKeyEquivalent:(id)a0 forEvent:(id)a1 target:(id *)a2 action:(SEL *)a3;

@end

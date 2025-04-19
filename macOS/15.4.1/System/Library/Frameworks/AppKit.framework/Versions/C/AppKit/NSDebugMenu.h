@class NSMenu, NSMutableArray;

@interface NSDebugMenu : NSObject {
    NSMutableArray *_menuItemProviders;
    NSMenu *_debugMenu;
}

@property (readonly) NSMenu *debugMenu;

+ (id)_menuItemProviderClasses;
+ (id)appKitDebugMenuItemProviders;
+ (id)createDebugMenuItem;
+ (id)debugMenuInMenu:(id)a0;
+ (void)registerMenuItemProvider:(Class)a0;
+ (void)unregisterMenuItemProvider:(Class)a0;

- (void)dealloc;
- (id)init;

@end

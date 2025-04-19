@class NSString, NSMenu, NSMenuItem;

@interface NSDebugMenuDumpLayerProvider : NSObject <NSMenuDelegate, NSDebugMenuItemProvider> {
    NSMenu *_windowsMenu;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSMenuItem *menuItem;

- (void)dealloc;
- (void)_dumpLayerForFunctionRow:(id)a0;
- (void)_dumpLayerForView:(id)a0;
- (void)_dumpLayerForWindow:(id)a0;
- (BOOL)menuHasKeyEquivalent:(id)a0 forEvent:(id)a1 target:(id *)a2 action:(SEL *)a3;
- (void)menuNeedsUpdate:(id)a0;
- (id)windowsMenuCreateIfNecessary;
- (BOOL)worksWhenModal;

@end

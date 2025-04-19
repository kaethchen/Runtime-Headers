@class NSMenu, NSMutableArray;

@interface GLUTMenu : NSObject {
    NSMutableArray *_menuItems;
    NSMenu *_nativeMenu;
    void /* function */ *_selectFunc;
    void /* function */ *_fselectFunc;
    int _menuid;
    GLUTMenu *_parentMenu;
}

- (void)dealloc;
- (void)finalize;
- (int)numberOfItems;
- (void)setParentMenu:(id)a0;
- (void)menuItemAction:(id)a0;
- (void)_removeSubmenu:(id)a0;
- (id)_buildMenu;
- (void)setMenuItemAtIndex:(int)a0 toTitle:(id)a1 tag:(int)a2;
- (void)_invalidateMenuCache;
- (void)addMenuItemWithTitle:(id)a0 tag:(int)a1;
- (void)addSubMenuWithTitle:(id)a0 menu:(id)a1;
- (void *)getFortranCallback;
- (id)initWithCallback:(void /* function */ *)a0 menuID:(int)a1;
- (int)menuID;
- (id)nativeMenu;
- (void)removeMenuItemAtIndex:(int)a0;
- (void)setFortranCallback:(void *)a0;
- (void)setMenuItemAtIndex:(int)a0 toTitle:(id)a1 menu:(id)a2;

@end

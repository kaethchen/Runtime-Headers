@class NSString, NSTextInputContext, NSMenu, NSMenuItem;

@interface _NSServicesInsertContextMenuUpdater : _NSServicesContextMenuUpdater <NSMenuItemValidation> {
    NSMenuItem *_insertMenuItem;
    NSMenu *_pluggedMenu;
    BOOL _didReceiveEventFromCatalystElement;
    BOOL _menuIsOpen;
    NSTextInputContext *_textInputContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)submenu;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (void)_addMenuItems;
- (void)_handleInsertFromContactsCommand:(id)a0;
- (void)_handleInsertFromCreditCardsCommand:(id)a0;
- (void)_handleInsertFromPasswordsCommand:(id)a0;
- (void)_processPluggedMenu;
- (void)_removeAllInsertFromMenuItems;
- (void)_replaceMenuItemInMenu:(id)a0 identifier:(id)a1 withMenuItem:(id)a2;
- (id)initWithMenuRef:(struct OpaqueMenuRef { } *)a0 correspondingToMenu:(id)a1 title:(id)a2 withRequestorChain:(id)a3;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)updateMenuVisibility;
- (BOOL)validateMenuItem:(id)a0;

@end

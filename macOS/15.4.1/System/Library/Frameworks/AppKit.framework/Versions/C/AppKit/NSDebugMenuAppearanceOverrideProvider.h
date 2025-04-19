@class NSString, NSPanel, NSMenuItem;

@interface NSDebugMenuAppearanceOverrideProvider : NSObject <NSMenuDelegate, NSDebugMenuItemProvider> {
    long long _currentOverride;
    NSPanel *_customAccentPanel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSMenuItem *menuItem;

- (void)dealloc;
- (id)_overrideItemWithTitle:(id)a0 value:(long long)a1;
- (id)_showHideCustomAccentPanelItem;
- (id)customAccentPanel;
- (void)menuNeedsUpdate:(id)a0;
- (void)setOverride:(id)a0;
- (void)toggleCustomAccentPanel:(id)a0;

@end

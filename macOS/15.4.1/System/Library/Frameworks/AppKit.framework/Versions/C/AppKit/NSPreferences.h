@class NSString, NSMatrix, NSMutableDictionary, NSMutableArray, NSWindow, NSButton, NSLayoutConstraint, NSBox;

@interface NSPreferences : NSObject <NSWindowRestoration> {
    NSWindow *_preferencesPanel;
    NSBox *_preferenceBox;
    NSMatrix *_moduleMatrix;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSButton *_applyButton;
    NSMutableArray *_preferenceTitles;
    NSMutableArray *_preferenceModules;
    NSMutableDictionary *_masterPreferenceViews;
    NSMutableDictionary *_currentSessionPreferenceViews;
    NSBox *_originalContentView;
    BOOL _isModal;
    double _constrainedWidth;
    id _currentModule;
    void *_reserved;
    BOOL _needsCentering;
    NSLayoutConstraint *_helpButtonLeadingConstraint;
    NSLayoutConstraint *_helpButtonTopConstraint;
    NSButton *_helpButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)defaultPreferencesClass;
+ (void)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setDefaultPreferencesClass:(Class)a0;
+ (id)sharedPreferences;

- (void)dealloc;
- (id)init;
- (void)ok:(id)a0;
- (id)_setupPreferencesPanelForOwner:(id)a0;
- (void)cancel:(id)a0;
- (void)_addNewToolbarItemsToToolbar:(id)a0;
- (id)_currentModuleHelpAnchor;
- (id)_currentModuleHelpBook;
- (id)_itemIdentifierForModule:(id)a0;
- (void)_selectModuleOwner:(id)a0;
- (id)_setupPreferencesPanelForOwnerAtIndex:(long long)a0;
- (void)_setupUI;
- (void)_updateToolbar;
- (void)activateModuleHelp:(id)a0;
- (void)addPreferenceNamed:(id)a0 owner:(id)a1;
- (void)apply:(id)a0;
- (void)confirmCloseSheetIsDone:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (long long)showModalPreferencesPanel;
- (long long)showModalPreferencesPanelForOwner:(id)a0;
- (void)showPreferencesPanel;
- (void)showPreferencesPanelForOwner:(id)a0;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (void)toolbarItemClicked:(id)a0;
- (id)toolbarSelectableItemIdentifiers:(id)a0;
- (void)updateConstrainedWidth:(double)a0;
- (BOOL)usesButtons;
- (void)window:(id)a0 willEncodeRestorableState:(id)a1;
- (void)windowDidResize:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (id)windowTitle;
- (struct CGSize { double x0; double x1; })windowWillResize:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;

@end

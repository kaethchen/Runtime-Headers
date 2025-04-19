@class NSPopUpButton, SODictationPreferences, NSButton, SODictationCommandManager, NSScrollView, NSImageView, NSBox, NSLayoutConstraint, NSString, NSUndoManager, SOCommandEditingViewController, NSSearchField, NSTableView, NSWindow, SOAddRemoveActionBar, NSView, NSTextView, SODictationCommandItem, NSTextField;

@interface SOCommandCustomizationViewController : NSViewController <NSMenuDelegate, NSWindowDelegate, SOTableViewDelegate> {
    BOOL _isAwakeFromNib;
    SODictationPreferences *_dictationPreferences;
    SODictationCommandManager *_commandManager;
    NSUndoManager *_commandUndoManager;
    SODictationCommandItem *_lastSelectedItem;
    SOCommandEditingViewController *_editingViewController;
    NSWindow *_window;
    NSBox *_customBox;
    NSView *_commandsContainer;
    NSView *_localeContainer;
    NSPopUpButton *_localePopUpButton;
    NSLayoutConstraint *_topConstraint;
    NSString *_currentLocaleIdentifier;
    NSLayoutConstraint *_bottomConstraint;
    NSString *_lastSelectedIdentifierForFeature;
    NSButton *_doneButton;
    NSView *_alertContainer;
    NSTextField *_alertTextField;
    NSSearchField *_searchField;
    NSTableView *_commandsTable;
    NSScrollView *_commandsScrollView;
    SOAddRemoveActionBar *_addRemoveActionBar;
    NSView *_addRemoveActionView;
    NSLayoutConstraint *_scrollViewWidthConstraint;
    NSTextField *_noCommandSelectedTextField;
    NSTextView *_commandVariationsTextView;
    NSScrollView *_commandVariationsScrollView;
    NSView *_editingViewContainer;
    NSImageView *_generalAlertImageView;
    NSTextField *_generalAlertTextField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultViewController;

- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)done:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)windowWillReturnUndoManager:(id)a0;
- (id)_selectedItem;
- (void)editingStateDidChange;
- (void)initConstraints;
- (BOOL)tableViewCaptureDeleteKeyPress:(id)a0;
- (void)_addItem:(id)a0 locale:(id)a1;
- (void)_buildLocaleMenu;
- (void)_clearSearchField;
- (void)_deleteItem:(id)a0 locale:(id)a1;
- (double)_minimumCommandWidth;
- (void)_saveTextEditingSessions;
- (void)_selectLanguage:(id)a0;
- (BOOL)_selectLastSelectedItem;
- (id)_selectedItemChanged:(BOOL *)a0;
- (void)_setGeneralAlertMessage:(id)a0;
- (void)_setLastSelectedItem:(id)a0;
- (BOOL)_setLocaleIdentifier:(id)a0;
- (void)_setupAccessibilityIdentifiers;
- (void)_undoItemWithIdentifier:(id)a0 dictionary:(id)a1 locale:(id)a2 select:(BOOL)a3;
- (void)_updateControlStatesBasedOnCurrentSelection;
- (void)_updateGeneralWarning;
- (BOOL)_updateItem:(id)a0 withDictionary:(id)a1;
- (BOOL)_updateItem:(id)a0 withDictionary:(id)a1 locale:(id)a2;
- (void)_updatePropertiesFromClientNotification:(id)a0;
- (void)cleanupConstraints;
- (void)deleteItemWithWarning:(id)a0;
- (void)focusOnConflicts:(id)a0;
- (void)pressAddRemoveActionBar:(id)a0;
- (void)searchForCommands:(id)a0;
- (void)setAddRemoveBarHidden:(BOOL)a0;
- (void)setLocalePopupHidden:(BOOL)a0;
- (void)showCommandsCustomizationSheetForWindow:(id)a0;
- (void)showHideGroup:(id)a0;
- (void)updateEnabledState:(id)a0;
- (void)updateMinimumWindowWidth;
- (void)updatePropertiesForClient:(id)a0;

@end

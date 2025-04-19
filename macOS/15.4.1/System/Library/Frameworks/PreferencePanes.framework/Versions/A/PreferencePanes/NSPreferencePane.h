@class NSString, NSBundle, NSView, NSWindow;

@interface NSPreferencePane : NSObject {
    NSWindow *_window;
    NSView *_initialKeyView;
    NSView *_firstKeyView;
    NSView *_lastKeyView;
    NSView *_mainView;
    NSBundle *_bundle;
    id _reserved1;
    id _reserved2;
    id _reserved3;
}

@property (readonly) NSBundle *bundle;
@property (readonly) NSString *mainNibName;
@property (readonly) unsigned long long shouldUnselect;
@property (retain) NSView *mainView;
@property (retain) NSView *initialKeyView;
@property (retain) NSView *firstKeyView;
@property (retain) NSView *lastKeyView;
@property (readonly) BOOL autoSaveTextFields;
@property (readonly, getter=isSelected) BOOL selected;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (void)didHide;
- (void)didBecomeActive;
- (void)didSelect;
- (void)didUnselect;
- (void)willSelect;
- (void)willUnselect;
- (void)didResignActive;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)helpMenuAction:(id)a0;
- (void)mainViewDidLoad;
- (void)assignMainView;
- (void)didChangeScreenParameters:(id)a0;
- (void)didUnhide;
- (void)handleOpenParameter:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0;
- (BOOL)hasElementForKey:(id)a0;
- (id)helpMenuItems;
- (id)loadMainView;
- (void)loadMainViewWithCompletionBlock:(id /* block */)a0;
- (void)openDocumentAtPath:(id)a0;
- (void)reloadMainViewWithCompletionBlock:(id /* block */)a0;
- (void)replyToShouldUnselect:(BOOL)a0;
- (void)revealElementForKey:(id)a0;
- (void)updateHelpMenuWithArray:(id)a0;
- (void)willHide;
- (void)willSelectWithReply:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)willUnhide;

@end

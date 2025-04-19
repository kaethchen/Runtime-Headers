@class NSURL, _NSQuickActionPresentation, NSString;

@interface _NSQuickAction : NSObject

@property (readonly) BOOL canRevealInFinder;
@property (readonly) BOOL canMoveToTrash;
@property (readonly) BOOL canRevealInShortcuts;
@property (readonly) _NSQuickActionPresentation *_presentation;
@property (readonly) Class _validationClass;
@property (readonly) Class _preferencesClass;
@property (readonly, copy) NSURL *_bundleURL;
@property (readonly) long long type;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *alternateTitle;
@property (readonly) BOOL hasIcon;
@property (readonly) BOOL hasColor;
@property (readonly, copy) NSString *identifier;
@property (readonly) BOOL needsItemSource;
@property (readonly) BOOL hasAlternate;

- (id)init;
- (void).cxx_destruct;
- (id)initForPresentation:(id)a0 identifier:(id)a1;
- (void)loadColorOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadISIconOnQueue:(id)a0 alternate:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)loadISIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadIconOnQueue:(id)a0 alternate:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)loadIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadTouchBarIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)moveToTrashAndReturnError:(id *)a0;
- (void)performWithItemSource:(id)a0;
- (void)performWithItemSource:(id)a0 alternate:(BOOL)a1;
- (BOOL)revealInFinderAndReturnError:(id *)a0;
- (BOOL)revealInShortcutsAndReturnError:(id *)a0;

@end

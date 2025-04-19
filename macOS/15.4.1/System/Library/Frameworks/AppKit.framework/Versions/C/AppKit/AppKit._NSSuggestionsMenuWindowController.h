@class NSString;

@interface AppKit._NSSuggestionsMenuWindowController : NSWindowController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_menuViewController;
    void /* unknown type, empty encoding */ visualEffectView;
}

@property (nonatomic, readonly) NSString *windowNibName;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindow:(id)a0;
- (BOOL)_window:(id)a0 shouldCloseForClosingParentPopoverWindowWithTransientContext:(BOOL)a1;
- (void)loadWindow;
- (void)windowDidLoad;

@end

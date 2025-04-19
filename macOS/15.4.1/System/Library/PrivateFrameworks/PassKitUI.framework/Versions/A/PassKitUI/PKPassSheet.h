@class NSArray, NSWindow, PKPassWindowController;

@interface PKPassSheet : NSObject {
    PKPassWindowController *_windowController;
}

@property (copy) id /* block */ completionHandler;
@property (readonly) NSArray *passes;
@property (readonly) NSWindow *hostWindow;
@property (readonly) BOOL didAddPass;

+ (id)sheetWithPasses:(id)a0 hostWindow:(id)a1;
+ (id)_sheets;
+ (id)sheetWithPass:(id)a0 hostWindow:(id)a1;
+ (id)sheetWithPassesContainer:(id)a0 hostWindow:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)windowWillClose:(id)a0;
- (void)showPass;
- (void)showPassWithCompletionHandler:(id /* block */)a0;
- (id)initWithPass:(id)a0 hostWindow:(id)a1;
- (id)initWithPasses:(id)a0 hostWindow:(id)a1;

@end

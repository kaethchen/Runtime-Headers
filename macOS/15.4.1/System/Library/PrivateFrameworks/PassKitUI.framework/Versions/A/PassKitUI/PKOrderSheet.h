@class NSURL, PKOrderWindowController, NSError, NSWindow;

@interface PKOrderSheet : NSObject {
    NSURL *_orderURL;
    NSWindow *_hostWindow;
    PKOrderWindowController *_windowController;
    NSError *_orderImportError;
    id /* block */ _completionHandler;
}

@property (readonly) BOOL didAddOrder;

+ (id)sheetWithOrderAtURL:(id)a0 hostWindow:(id)a1;

- (void).cxx_destruct;
- (void)windowWillClose:(id)a0;
- (void)showOrderWithCompletionHandler:(id /* block */)a0;
- (void)callCompletionHandler;
- (id /* block */)createCompletionHandlerForOrderWindowController;
- (id)initWithOrderAtURL:(id)a0 hostWindow:(id)a1;

@end

@class NSWindow;

@interface SheetRequest : NSObject {
    NSWindow *_window;
}

@property (readonly, nonatomic) NSWindow *window;
@property (readonly, nonatomic) BOOL isAuthenticationSheetRequest;

- (void).cxx_destruct;
- (BOOL)_windowHasAttachedSheet;
- (void)displaySheet;
- (void)displaySheetInWindow:(id)a0;

@end

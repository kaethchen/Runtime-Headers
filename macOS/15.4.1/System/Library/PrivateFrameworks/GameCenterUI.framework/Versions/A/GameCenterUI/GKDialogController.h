@class NSWindow, NSViewController;

@interface GKDialogController : NSResponder

@property (readonly, nonatomic) NSViewController *viewController;
@property (weak) NSWindow *parentWindow;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)mainWindow;
+ (id)sharedDialogController;

- (void)dealloc;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)dismiss:(id)a0;
- (BOOL)presentViewController:(id)a0;

@end

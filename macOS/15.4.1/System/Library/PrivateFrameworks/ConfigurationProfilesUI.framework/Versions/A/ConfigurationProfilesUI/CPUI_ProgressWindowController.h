@class NSTextField, NSProgressIndicator, NSDate, NSString, NSImage, NSLayoutConstraint, NSImageView, NSButton, NSWindow;

@interface CPUI_ProgressWindowController : NSWindowController

@property NSImageView *iconView;
@property NSTextField *titleField;
@property NSTextField *messageField;
@property NSProgressIndicator *progressIndicator;
@property (retain) NSButton *cancelButton;
@property (retain) NSLayoutConstraint *layoutCancelTop;
@property (retain) NSLayoutConstraint *layoutCancelBottom;
@property (retain) NSLayoutConstraint *layoutCancelLeading;
@property (retain) NSLayoutConstraint *layoutCancelTrailing;
@property (retain) NSLayoutConstraint *layoutNoCancelProgressBottom;
@property int style;
@property (readonly) BOOL cancelled;
@property (retain) NSDate *sheetShowDate;
@property (retain) NSImage *icon;
@property (retain) NSString *reason;
@property (copy) id /* block */ responseHandler;
@property (retain) NSWindow *hostWindow;
@property (nonatomic) BOOL cancellable;
@property (retain) NSString *logPrefix;

+ (id)controllerWithIcon:(id)a0 reason:(id)a1;
+ (id)controllerWithNibName:(id)a0 style:(int)a1 icon:(id)a2 reason:(id)a3;
+ (id)messageOnlyControllerWithReason:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)setMessage:(id)a0;
- (void)reset;
- (void)display;
- (void)windowDidLoad;
- (void)cancelClicked:(id)a0;
- (void)setProgressAnimating:(BOOL)a0;
- (void)setTitle:(id)a0 message:(id)a1;

@end

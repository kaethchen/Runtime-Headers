@class NSString, NSProgress, NSDate, ICMProgressWindowController, NSWindow;

@interface ICLongRunningTaskController : NSObject <ICMProgressWindowControllerDelegate>

@property (retain, nonatomic) NSWindow *window;
@property (nonatomic) double intervalBeforeOpeningProgressDialog;
@property (retain, nonatomic) id keepAlive;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ updateProgressUIBlock;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate;
@property (retain, nonatomic) NSDate *openProgressDate;
@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) ICMProgressWindowController *progressWindowController;
@property (readonly, nonatomic) NSString *progressText;
@property (nonatomic) BOOL shouldShowCancelButton;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (copy, nonatomic) NSString *customCancelButtonTitle;
@property (copy, nonatomic) NSString *progressString;
@property (copy, nonatomic) id /* block */ progressStringBlock;
@property (nonatomic) BOOL shouldShowSpinner;
@property (nonatomic) BOOL allowSingleUnitProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setMainWindow:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateProgress;
- (void)closeProgressDialog;
- (void)completeTaskIfNecessary;
- (void)didTapCancelButtonInProgressWindowController:(id)a0;
- (id)initWithShouldShowSpinner:(BOOL)a0 progressText:(id)a1;
- (id)initWithWindow:(id)a0 intervalBeforeOpeningProgressDialog:(double)a1;
- (void)openProgressDialog;
- (void)startTask:(id /* block */)a0 completionBlock:(id /* block */)a1;

@end

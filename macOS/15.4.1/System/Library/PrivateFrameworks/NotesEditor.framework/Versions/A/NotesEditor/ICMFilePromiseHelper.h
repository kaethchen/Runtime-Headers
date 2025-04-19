@class NSError, NSString, NSURL, NSSet, NSOperationQueue, ICMProgressWindowController, NSObject, NSWindow, NSMutableSet;
@protocol OS_dispatch_queue, ICMFilePromiseHelperDelegate;

@interface ICMFilePromiseHelper : NSObject <ICMProgressWindowControllerDelegate>

@property (retain, nonatomic) NSURL *directoryURL;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSSet *allPromises;
@property (retain, nonatomic) NSMutableSet *processedPromises;
@property (retain, nonatomic) NSMutableSet *processedURLs;
@property (nonatomic) BOOL complete;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) struct CGPoint { double x; double y; } dropPoint;
@property (weak, nonatomic) NSWindow *window;
@property (retain, nonatomic) ICMProgressWindowController *progressWindowController;
@property (weak, nonatomic) id<ICMFilePromiseHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)purgeTempDirectory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (void)updateProgress;
- (void)didTapCancelButtonInProgressWindowController:(id)a0;
- (void)cancelProgressWindow;
- (id)createTempDirectory;
- (void)receiveFilePromises:(id)a0 dropPoint:(struct CGPoint { double x0; double x1; })a1 window:(id)a2;
- (void)removeTempDirectory:(id)a0;
- (void)showProgressWindowWithProgress:(double)a0 title:(id)a1 subTitle:(id)a2;
- (void)updateProgressIfNecessary;

@end

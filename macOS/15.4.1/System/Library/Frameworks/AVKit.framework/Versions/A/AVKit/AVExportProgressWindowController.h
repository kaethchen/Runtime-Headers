@class NSTextField, NSString, AVFoundationExportSession, NSProgressIndicator, NSError, NSWindow, NSButton, AVProgressEstimator;

@interface AVExportProgressWindowController : NSWindowController <AVExportSessionHelperDelegate> {
    NSProgressIndicator *_progressIndicator;
    NSButton *_cancelButton;
    NSTextField *_statusField;
    AVFoundationExportSession *_exportSession;
    AVProgressEstimator *_progressEstimator;
}

@property (readonly) double estimatedTimeRemaining;
@property (retain) NSError *error;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy, nonatomic) NSString *statusString;
@property (weak) NSWindow *presentingWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingStatusString;

- (void).cxx_destruct;
- (void)close;
- (void)cancel:(id)a0;
- (void)stopModalWithCode:(long long)a0;
- (id)windowNibName;
- (void)exportSessionDidCancel;
- (void)exportSessionDidFailWithError:(id)a0;
- (void)exportSessionDidReachPercentProgress:(float)a0;
- (void)exportSessionDidStart;
- (void)exportSessionDidSucceed;
- (id)initWithAsset:(id)a0 videoComposition:(id)a1 audioMix:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 outputURL:(id)a4;

@end

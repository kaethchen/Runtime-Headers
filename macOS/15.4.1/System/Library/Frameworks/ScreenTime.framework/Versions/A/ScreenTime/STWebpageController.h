@class STWebpageView, NSString, NSURL, USVideoUsage, STWebRemoteViewController;
@protocol STWebService;

@interface STWebpageController : NSViewController {
    long long _currentUsageState;
}

@property (retain) STWebRemoteViewController *remoteViewController;
@property (readonly) id<STWebService> serviceProxy;
@property (retain) USVideoUsage *videoUsage;
@property (nonatomic) long long currentUsageState;
@property (readonly) long long defaultUsageState;
@property (readonly) BOOL URLIsPlayingVideoPictureInPicture;
@property BOOL URLIsBlocked;
@property (retain) STWebpageView *view;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL suppressUsageRecording;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) BOOL URLIsPlayingVideo;
@property (nonatomic) BOOL URLIsPictureInPicture;
@property (copy, nonatomic) NSString *profileIdentifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)_windowDidChangeOcclusionState:(id)a0;
- (void)_windowDidBecomeMain:(id)a0;
- (void)_windowDidResignMain:(id)a0;
- (void)_changeUsageState:(long long)a0 errorHandler:(id /* block */)a1;
- (void)_URLIsBlockedDidChangeFrom:(id)a0 to:(id)a1;
- (void)_setURL:(id)a0 bundleIdentifier:(id)a1 profileIdentifier:(id)a2 usageState:(long long)a3 errorHandler:(id /* block */)a4;
- (void)_startRecordingVideoUsageIfNeeded;
- (void)_startReportingWebUsage;
- (BOOL)setBundleIdentifier:(id)a0 error:(id *)a1;

@end

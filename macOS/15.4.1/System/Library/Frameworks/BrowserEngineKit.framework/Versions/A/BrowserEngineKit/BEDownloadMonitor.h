@class NSUUID, NSURL, NSError, BEDownloadMonitorLocation;

@interface BEDownloadMonitor : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ sourceURL;
    void /* unknown type, empty encoding */ destinationURL;
    void /* unknown type, empty encoding */ observedProgress;
    void /* unknown type, empty encoding */ useDownloadsFolder;
    void /* unknown type, empty encoding */ finalFileCreatedHandler;
    void /* unknown type, empty encoding */ placeholderType;
    void /* unknown type, empty encoding */ placeholderURLWrapper;
    void /* unknown type, empty encoding */ placeholderURLBookmarkData;
    void /* unknown type, empty encoding */ innerProgress;
    void /* unknown type, empty encoding */ clientProgressFractionObservation;
    void /* unknown type, empty encoding */ clientProgressFinishedObservation;
    void /* unknown type, empty encoding */ clientProgressCancelObservation;
    void /* unknown type, empty encoding */ innerProgressCancelObservation;
    void /* unknown type, empty encoding */ didBegin;
    void /* unknown type, empty encoding */ lastSavedProgress;
    void /* unknown type, empty encoding */ liveActivityAccessToken;
    void /* unknown type, empty encoding */ liveActivitySandboxExtensionHandle;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) NSURL *destinationURL;

+ (id)createAccessToken;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginMonitoring:(void (^)(BEDownloadMonitorLocation *, NSError *))a0;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 observedProgress:(id)a2 liveActivityAccessToken:(id)a3;
- (void)resumeMonitoring:(NSURL *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)useDownloadsFolderWithPlaceholderType:(id)a0 finalFileCreatedHandler:(id /* block */)a1;

@end

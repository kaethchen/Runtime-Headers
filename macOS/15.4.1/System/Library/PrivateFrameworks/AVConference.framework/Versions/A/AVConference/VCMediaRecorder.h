@class VideoAttributes, NSString, NSMutableDictionary, VCMediaRecorderHistory, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VCMediaRecorder : VCObject <VCMediaRecorderProtocol> {
    id _delegate;
    id _transportDelegate;
    unsigned int _streamToken;
    VCMediaRecorderHistory *_mediaRecorderHistory;
    unsigned char _mode;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    int _currentActiveRequestsCount;
    BOOL _isClientRegistered;
    NSMutableSet *_requests;
    NSMutableDictionary *_transactionIDToRequestMap;
    BOOL _lastRequest;
    unsigned int _currentTimestamp;
    double _lastHealthPrintCallAbsoluteSeconds;
    unsigned long long _localVideoCallbacksCount;
    unsigned long long _localVideoCallbacksClearedCount;
    unsigned long long _localAudioCallbacksCount;
    unsigned long long _localAudioCallbacksClearedCount;
    unsigned long long _remoteAudioCallbacksCount;
    unsigned long long _remoteAudioCallbacksClearedCount;
    unsigned long long _bufferResets;
}

@property (nonatomic) unsigned int capabilities;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) VideoAttributes *targetScreenAttributes;
@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;
@property (readonly, nonatomic) BOOL usesClientToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)typeForRequest:(id)a0;
+ (unsigned long long)countForRequestType:(int)a0 requestMode:(unsigned char)a1;
+ (unsigned long long)deviceFreeDiskSpace;
+ (BOOL)deviceHasSufficientFreeSpace;
+ (BOOL)validateIncomingRequest:(id)a0;
+ (BOOL)validateNonzeroAudioRecordingLengthURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (void)invalidate;
- (void)registerClient;
- (void)setFrameRate:(float)a0;
- (void)processRequest:(id)a0;
- (void)removeRequest:(id)a0;
- (id)dispatchedMediaRecorderDelegate;
- (id /* block */)endCompletionHandlerForRequest:(id)a0;
- (void)addOrAmendRequest:(id)a0;
- (void)deregisterClient;
- (BOOL)dispatchedAssertAudioStackStartedIfNeededForRequest:(id)a0;
- (void)dispatchedCleanUpAllOutstandingRequests;
- (BOOL)dispatchedProcessClientRequest:(id)a0 error:(id *)a1;
- (void)dispatchedProcessRequest:(id)a0;
- (void)dispatchedRemoveAsynchronousAudioAssertionIfNeeded;
- (void)dispatchedSetCapabilities:(unsigned int)a0;
- (id)dispatchedTransportDelegate;
- (void)handleInsufficientFreeSpaceWithRequest:(id)a0 delegate:(id)a1;
- (id)initWithStreamToken:(unsigned int)a0 delegate:(id)a1 reportingAgent:(struct opaqueRTCReporting { } *)a2;
- (BOOL)isHistorySupported;
- (void)notifyFinishWithRequest:(id)a0 didSucceed:(BOOL)a1 fileSize:(long long)a2;
- (void)notifyLocalFinishWithRequest:(id)a0 didSucceed:(BOOL)a1 fileSize:(long long)a2;
- (void)notifyRemoteFinishWithRequest:(id)a0 didSucceed:(BOOL)a1 fileSize:(long long)a2;
- (void)printEndRecordingCheckpointWithMediaType:(unsigned char)a0;
- (BOOL)processClientRequest:(id)a0 error:(id *)a1;
- (void)processRemoteLivePhotoRequest:(id)a0;
- (void)processRemotePhotoRequest:(id)a0;
- (void)processRemoteRequest:(id)a0 withMediaType:(unsigned char)a1;
- (void)reportingMediaRecorderLivePhotoWithRequest:(id)a0;
- (void)reportingMediaRecorderWithRequest:(id)a0 fileLength:(double)a1 fileSize:(unsigned long long)a2;
- (void)setInitialRemoteScreenAttributes:(id)a0;
- (void)setMediaRecorderDelegate:(id)a0;
- (void)setTransportDelegate:(id)a0;
- (void)setUpReportingAgent;
- (void)updateActiveStatus;
- (BOOL)validateNumberOfRequestsWithError:(id *)a0;

@end

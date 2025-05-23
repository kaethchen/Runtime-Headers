@class AVConferenceXPCClient, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVCMoments : NSObject {
    AVConferenceXPCClient *_connection;
    NSMutableDictionary *_requests;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _isLocalRecordingEnabled;
}

@property (readonly, nonatomic) id delegate;
@property (readonly, nonatomic) long long streamToken;
@property (readonly, nonatomic) unsigned int capabilities;
@property (readonly, nonatomic) NSString *requesterID;
@property (readonly, nonatomic) int activeRequestCount;
@property (readonly, nonatomic) int pendingRequestCount;

+ (BOOL)isLocalRecordingEnabled;
+ (id)obtainSandboxConsciousURLFromXPCResult:(id)a0;

- (void)dealloc;
- (id)description;
- (void)disconnect;
- (void)updateCapabilities:(unsigned int)a0;
- (BOOL)avcMediaRecorderRequestDidEndRequest:(id)a0 withError:(id *)a1;
- (BOOL)avcMediaRecorderRequestDidRejectRequest:(id)a0 withError:(id *)a1;
- (BOOL)avcMediaRecorderRequestDidStartRequest:(id)a0 withError:(id *)a1;
- (BOOL)connectWithConfiguration:(id)a0;
- (BOOL)connectWithStreamToken:(long long)a0;
- (void)deregisterBlocksForNotifications;
- (void)didEndProcessingRequestHelperWithResult:(id)a0;
- (void)didFinishRequestHelperWithResult:(id)a0;
- (void)didStartProcessingRequestHelperWithResult:(id)a0;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 dispatchQueue:(id)a2;
- (id)initWithStreamToken:(long long)a0 requesterID:(id)a1 delegate:(id)a2 dispatchQueue:(id)a3;
- (id)newRequestWithConfiguration:(id)a0;
- (id)newRequestWithMediaType:(unsigned char)a0 mode:(unsigned char)a1 requesteeID:(id)a2;
- (id)newRequestWithMediaType:(unsigned char)a0 requesteeID:(id)a1;
- (void)registerBlocksForNotifications;
- (BOOL)setupDelegate:(id)a0 dispatchQueue:(id)a1;

@end

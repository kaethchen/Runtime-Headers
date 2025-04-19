@class VideoAttributes, NSString, VCMediaRecorderHistoryBuffer, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, VCMovieWriterProtocol;

@interface VCMediaRecorderHistory : NSObject <VCMediaRecorderHistoryBufferDelegate> {
    NSObject<OS_dispatch_queue> *_recordingQueue;
    VCMediaRecorderHistoryBuffer *_localAudioBuffer;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_writers;
    id<VCMovieWriterProtocol> _writer;
    NSString *_masterTransactionID;
    NSMutableArray *_pendingRequests;
    VCMediaRecorderHistoryBuffer *_frameBuffer;
    VCMediaRecorderHistoryBuffer *_remoteAudioBuffer;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_stillImageURLs;
    VideoAttributes *_targetScreenAttributes;
    struct __CVPixelBufferPool { } *_bufferPool;
    struct CGSize { double width; double height; } _bufferPoolResolution;
    struct __CVPixelBufferPool { } *_copyPool;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    struct OpaqueVTPixelTransferSession { } *_copyTransferSession;
    int _captureHeight;
    int _captureWidth;
    BOOL _resize;
    BOOL _isFirstFrame;
    struct __CFAllocator { } *_audioSampleBufferAllocator;
    struct tagVCMediaRecorderHistoryAudioFormat { struct opaqueCMFormatDescription *figFormat; struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } basicFormat; } _localFormat;
    struct tagVCMediaRecorderHistoryAudioFormat { struct opaqueCMFormatDescription *figFormat; struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } basicFormat; } _remoteFormat;
    struct __CFAllocator { } *_frameAllocator;
    BOOL _retainPixelBufferEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _targetScreenAttributesLock;
}

@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fileNameForMediaType:(unsigned char)a0 dateString:(id)a1;
+ (BOOL)isRecordingOnlyMediaType:(unsigned char)a0;
+ (unsigned char)mediaTypeFromWriterMode:(unsigned char)a0;
+ (int)rewriteMovieMetadataWithURL:(id)a0 transactionID:(id)a1;
+ (unsigned char)writerModeFromMediaType:(unsigned char)a0;

- (void)dealloc;
- (void)setFrameRate:(float)a0;
- (id)initWithDelegateQueue:(id)a0;
- (void)cancelRequestWithTransactionID:(id)a0;
- (id)_getActiveWriters;
- (unsigned char)_mediaTypeForBuffer:(id)a0;
- (void)appendSampleWithWriter:(id)a0 buffer:(id)a1 sample:(struct opaqueCMSampleBuffer { } *)a2 mediaType:(unsigned char)a3;
- (void)cleanupTransferSession;
- (void)dispatchedFinishWritingAllRequests;
- (void)dispatchedStartRecordingWithContext:(id)a0 fileURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)endRecording:(id)a0 timestamp:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (id)fileExtensionForMediaType:(unsigned char)a0;
- (id)fileURLWithDirectoryURL:(id)a0 transactionID:(id)a1 type:(unsigned char)a2;
- (void)flushHistoryBuffers;
- (id)handleCopyRequestWithTransactionID:(id)a0 sourceURL:(id)a1 errorCode:(int *)a2;
- (void)handlePendingRequestSuccessWithSourceURL:(id)a0;
- (void)handlePendingRequestWithError:(id)a0;
- (void)handlePendingRequestsWithSourceURL:(id)a0 error:(id)a1;
- (void)handleSinglePendingRequestWithTransactionID:(id)a0 sourceURL:(id)a1;
- (void)historyBuffer:(id)a0 didDequeueSample:(struct opaqueCMSampleBuffer { } *)a1 timestamp:(unsigned int)a2;
- (void)invokeStartCompletionHandler:(id /* block */)a0 withErrorCode:(int)a1 ontoRecordingQueue:(BOOL)a2;
- (void)registerDirectoryWithURL:(id)a0;
- (void)setCompletionHandler:(id /* block */)a0 forTransactionID:(id)a1;
- (BOOL)setUpAudioBuffers;
- (void)setUpCaptureFormatForWriter:(id)a0 atTimestamp:(unsigned int)a1;
- (BOOL)setUpDelegateQueue:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })setUpStillImageWithContext:(id)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 cameraStatusBit:(char *)a2 imageType:(int)a3;
- (BOOL)setUpVideoBuffers;
- (void)setUpWriterWithContext:(id)a0 fileURL:(id)a1 stillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 cameraStatusBit:(unsigned char)a4;
- (void)setupResizingSessionsWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cameraStatusBit:(unsigned char)a1;
- (void)startRecordingWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopProcessingTransactionID:(id)a0;
- (void)takeLivePhotoWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)takePhotoWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)writeToFileWithTimestamp:(unsigned int)a0 transactionID:(id)a1 directoryURL:(id)a2 imageType:(int)a3;
- (id)writeToLivePhotoToFileWithFrame:(struct __CVBuffer { } *)a0 transactionID:(id)a1 directoryURL:(id)a2 imageType:(int)a3 cameraStatusBits:(unsigned char)a4;

@end

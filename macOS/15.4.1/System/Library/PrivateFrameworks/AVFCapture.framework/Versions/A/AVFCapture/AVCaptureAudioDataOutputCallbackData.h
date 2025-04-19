@class AVCaptureAudioDataOutput_Tundra, AVCaptureConnection_Tundra;

@interface AVCaptureAudioDataOutputCallbackData : NSObject {
    AVCaptureAudioDataOutput_Tundra *_output;
    AVCaptureConnection_Tundra *_connection;
    struct opaqueCMBufferQueue { } *_bufferQueue;
}

@property (nonatomic) void *callbackContextToken;

+ (id)callbackDataWithOutput:(id)a0 connection:(id)a1;

- (void)dealloc;
- (id)connection;
- (id)output;
- (struct opaqueCMBufferQueue { } *)bufferQueue;
- (id)initWithOutput:(id)a0 connection:(id)a1;

@end

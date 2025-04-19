@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioFileLog : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueExtAudioFile { } *_audioFile;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    NSURL *_url;
    unsigned int _audioLength;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_closeAudioFile;
- (id)_nowString;
- (id)_audioLogDirectory;
- (id)_getOrCreateAudioLogDirectory;
- (id)_makeTimestampedAudioLogFilenameWithPrefix:(id)a0 suffix:(id)a1;
- (void)appendAudioData:(id)a0;
- (void)startRecording;
- (void)stopRecording;

@end

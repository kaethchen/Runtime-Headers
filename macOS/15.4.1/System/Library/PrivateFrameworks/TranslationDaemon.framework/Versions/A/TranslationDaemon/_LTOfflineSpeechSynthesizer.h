@class SiriTTSDaemonSession, _LTAudioDecoder, NSMutableArray, SiriTTSSynthesisRequest;

@interface _LTOfflineSpeechSynthesizer : NSObject {
    id /* block */ _completion;
    SiriTTSDaemonSession *_session;
    SiriTTSSynthesisRequest *_currentRequest;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _currentAudioStreamDescription;
    NSMutableArray *_currentAudioData;
    NSMutableArray *_currentWordTimingInfo;
    _LTAudioDecoder *_audioDecoder;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCompletion:(id /* block */)a0;
- (void)speak:(id)a0 withContext:(id)a1;

@end

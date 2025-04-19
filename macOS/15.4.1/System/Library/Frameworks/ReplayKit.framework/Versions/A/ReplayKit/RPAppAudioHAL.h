@class NSDate, RPThread, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface RPAppAudioHAL : NSObject {
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioBasicDescription;
    NSObject<OS_dispatch_queue> *_audioDispatchQueue;
    unsigned int *_currentOutputDevice;
    id /* block */ _appAudioOutputHandler;
    NSDate *_lastAudioDate;
    RPThread *_rpThread;
    NSObject<OS_dispatch_semaphore> *_audioProcessSemaphore;
    struct opaqueCMSimpleQueue { } *_audioQueue;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentTime;
    struct { unsigned int x0; struct opaqueCMSimpleQueue *x1; } *_packetPool;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_appendedAudioBufferList;
    float _audioSampleRate;
    float _audioOutputBlockPeriodSeconds;
    long long _audioOutputBlockPeriodNanoSeconds;
    id /* block */ _defaultDeviceChangedListener;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)connectToDefaultAudioOutputDevice;
- (id)initWithAudioDispatchQueue:(id)a0;
- (void)sendAudioOutputToHandler:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (void)sendAudioSilenceToOutputHandlerIfNeeded;
- (BOOL)shouldSendAudioToOutputHandlerAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)startWithCaptureHandler:(id /* block */)a0;

@end

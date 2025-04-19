@class CSOSTransaction, NSString, CSAudioStream, CSAudioCircularBuffer, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioTapProvider : NSObject <CSAudioServerCrashMonitorDelegate, CSSystemDaemonStateMonitorDelegate, CSAudioStreamProviding> {
    struct AudioQueueBuffer *_audioBuffers[4];
}

@property (nonatomic) struct OpaqueAudioQueue { } *recordingAudioQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue;
@property (copy, nonatomic) id /* block */ aqStartCompletion;
@property (copy, nonatomic) id /* block */ aqStopCompletion;
@property (retain, nonatomic) NSString *UUIDString;
@property (retain, nonatomic) CSAudioCircularBuffer *circularBuffer;
@property (weak, nonatomic) CSAudioStream *audioStream;
@property (nonatomic) unsigned long long processedSampleCount;
@property (retain, nonatomic) CSOSTransaction *transaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)UUID;
- (void)_reset;
- (BOOL)isRecording;
- (void)setup;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)CSSystemDaemonStateMonitorDidReceiveSysDaemonRestartFromCrash:(id)a0;
- (id)audioChunkToEndFrom:(unsigned long long)a0 channelIdx:(unsigned long long)a1;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)CSSystemDaemonStateMonitorDidReceiveSysDaemonCrash:(id)a0;
- (id)audioDeviceInfo;
- (unsigned int)_calculateBufferSize:(struct OpaqueAudioQueue { } *)a0 audioStreamBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 frameSizeInSec:(float)a2;
- (void)_destroyRecordingAudioQueue;
- (void)_holdTransactionForStartListening;
- (void)_releaseTransactionForStopListeningIfNeeded;
- (void)_saveRecordingBufferFrom:(unsigned long long)a0 to:(unsigned long long)a1 toURL:(id)a2;
- (BOOL)_setupRecordingAudioQueueIfNeededWithOption:(id)a0;
- (void)_stopRecordingAudioQueueIfNeededWithCompletion:(id /* block */)a0;
- (void)attachTandemStream:(id)a0 toPrimaryStream:(id)a1 completion:(id /* block */)a2;
- (id)audioChunkFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)audioChunkFrom:(unsigned long long)a0 to:(unsigned long long)a1 channelIdx:(unsigned long long)a2;
- (id)audioChunkToEndFrom:(unsigned long long)a0;
- (unsigned long long)audioStreamId;
- (void)audioStreamWithRequest:(id)a0 streamName:(id)a1 completion:(id /* block */)a2;
- (id)audioStreamWithRequest:(id)a0 streamName:(id)a1 error:(id *)a2;
- (void)cancelAudioStreamHold:(id)a0;
- (void)destroyRecordingAudioQueue;
- (id)holdAudioStreamWithDescription:(id)a0 option:(id)a1;
- (BOOL)isNarrowBand;
- (id)playbackRoute;
- (void)prepareAudioStream:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (BOOL)prepareAudioStreamSync:(id)a0 request:(id)a1 error:(id *)a2;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (id)recordSettings;
- (void)saveRecordingBufferFrom:(unsigned long long)a0 to:(unsigned long long)a1 toURL:(id)a2;
- (void)saveRecordingBufferToEndFrom:(unsigned long long)a0 toURL:(id)a1;
- (void)setAnnounceCallsEnabled:(BOOL)a0 withStreamHandleID:(unsigned long long)a1;
- (BOOL)setCurrentContext:(id)a0 error:(id *)a1;
- (void)startAudioStream:(id)a0 option:(id)a1 completion:(id /* block */)a2;
- (void)stopAudioStream:(id)a0 option:(id)a1 completion:(id /* block */)a2;
- (BOOL)supportsDuckingOnCurrentRouteWithError:(id *)a0;

@end

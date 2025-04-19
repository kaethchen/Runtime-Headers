@class NSArray, NSDictionary, NSURL, AVAudioFormat;
@protocol AVAudioRecorderDelegate;

@interface AVAudioRecorder : NSObject {
    void *_impl;
}

@property (readonly, getter=isRecording) BOOL recording;
@property (readonly) NSURL *url;
@property (readonly) NSDictionary *settings;
@property (readonly) AVAudioFormat *format;
@property (weak) id<AVAudioRecorderDelegate> delegate;
@property (readonly) double currentTime;
@property (readonly) double deviceCurrentTime;
@property (getter=isMeteringEnabled) BOOL meteringEnabled;
@property (copy, nonatomic) NSArray *channelAssignments;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)pause;
- (void)stop;
- (struct AudioRecorderImpl { id x0; id x1; id x2; id x3; id x4; id x5; id x6; unsigned int x7; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x8; struct OpaqueAudioFileID *x9; struct OpaqueAudioQueue *x10; long long x11; long long x12; long long x13; double x14; double x15; double x16; unsigned long long x17; char *x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; struct AudioQueueLevelMeterState *x27; struct AudioQueueBuffer *x28[4]; struct AudioQueueBuffer *x29; BOOL x30; struct unfair_lock { struct os_unfair_lock_s { unsigned int x0; } x0; } x31; } *)impl;
- (BOOL)record;
- (float)averagePowerForChannel:(unsigned long long)a0;
- (float)peakPowerForChannel:(unsigned long long)a0;
- (void)updateMeters;
- (id)baseInit;
- (BOOL)prepareToRecord;
- (id)initWithURL:(id)a0 settings:(id)a1 error:(id *)a2;
- (BOOL)deleteRecording;
- (void)finishedRecording:(id)a0;
- (id)initWithURL:(id)a0 format:(id)a1 error:(id *)a2;
- (BOOL)instantaneousMetering;
- (void)privCommonCleanup;
- (void)privRemoveSessionPropertyListeners;
- (void)privSetDelegate:(id)a0;
- (BOOL)recordAtTime:(double)a0;
- (BOOL)recordAtTime:(double)a0 forDuration:(double)a1;
- (BOOL)recordForDuration:(double)a0;
- (void)setInstantaneousMetering:(BOOL)a0;

@end

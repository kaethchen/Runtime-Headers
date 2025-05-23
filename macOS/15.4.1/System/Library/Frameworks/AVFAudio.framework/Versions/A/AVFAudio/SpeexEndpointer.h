@class NSString;

@interface SpeexEndpointer : NSObject <Endpointer> {
    double mStartWaitTime;
    double mInterspeechWaitTime;
    double mEndWaitTime;
    int mEndpointMode;
    unsigned int mFrameRate;
    int mLastStatus;
    struct Impl { void *x0; struct Averager *x1; } *_impl;
}

@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0;
- (BOOL)configureWithASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 andFrameRate:(unsigned int)a1;
- (BOOL)configureWithSampleRate:(double)a0 andFrameRate:(unsigned int)a1;
- (int)getStatus:(float *)a0 count:(unsigned int)a1;

@end

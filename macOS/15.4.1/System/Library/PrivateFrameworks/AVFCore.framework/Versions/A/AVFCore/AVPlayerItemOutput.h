@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {
    AVPlayerItemOutputInternal *_outputInternal;
}

@property (nonatomic) BOOL suppressesPlayerRendering;

- (void)dealloc;
- (id)init;
- (BOOL)_attachToPlayerItem:(id)a0;
- (struct OpaqueCMTimebase { } *)_copyTimebase;
- (void)_detachFromPlayerItem;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_itemTimeForHostTimeAsCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_setTimebase:(struct OpaqueCMTimebase { } *)a0;
- (id)_weakReference;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })itemTimeForCVTimeStamp:(struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })itemTimeForHostTime:(double)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })itemTimeForMachAbsoluteTime:(long long)a0;

@end

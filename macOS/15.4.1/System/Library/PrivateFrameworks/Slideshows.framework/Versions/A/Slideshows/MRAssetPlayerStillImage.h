@class NSObject;
@protocol OS_dispatch_semaphore;

@interface MRAssetPlayerStillImage : MRAssetPlayer {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    BOOL _isLoaded;
    BOOL _isLoadingOrLoaded;
}

- (void)dealloc;
- (id)initWithPath:(id)a0 size:(struct CGSize { double x0; double x1; })a1 master:(id)a2 andOptions:(id)a3;
- (void)loadForTime:(double)a0;
- (id)retainedByUserImageAtTime:(double)a0 displayLinkTimestamp:(struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; })a1;

@end

@class NSArray, AVCaptionGroupInternal;

@interface AVCaptionGroup : NSObject {
    AVCaptionGroupInternal *_internal;
}

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) NSArray *captions;

- (void)dealloc;
- (id)description;
- (struct opaqueCMSampleBuffer { } *)copySampleBufferWithError:(id *)a0;
- (id)initWithCaptions:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end

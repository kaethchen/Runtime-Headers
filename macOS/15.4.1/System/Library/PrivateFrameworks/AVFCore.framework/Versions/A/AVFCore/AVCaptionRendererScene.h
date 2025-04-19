@class AVCaptionRendererSceneInternal;

@interface AVCaptionRendererScene : NSObject <NSCopying> {
    AVCaptionRendererSceneInternal *_internal;
}

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) BOOL hasActiveCaptions;
@property (readonly, nonatomic) BOOL needsPeriodicRefresh;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 hasActiveCaptions:(BOOL)a1 needsPeriodicRefresh:(BOOL)a2;

@end

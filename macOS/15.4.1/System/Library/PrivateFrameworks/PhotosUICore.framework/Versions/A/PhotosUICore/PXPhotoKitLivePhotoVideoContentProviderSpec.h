@interface PXPhotoKitLivePhotoVideoContentProviderSpec : NSObject <NSCopying>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } crossfadeDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } loopStartTime;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } loopTimeRange;
@property (nonatomic) BOOL stabilizeIfPossible;
@property (nonatomic) BOOL wantsAudio;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)identifier;

@end

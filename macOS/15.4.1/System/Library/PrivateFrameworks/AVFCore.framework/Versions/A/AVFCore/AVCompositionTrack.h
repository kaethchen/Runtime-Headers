@class NSArray, AVCompositionTrackInternal;

@interface AVCompositionTrack : AVAssetTrack {
    AVCompositionTrackInternal *_priv;
}

@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly) NSArray *formatDescriptionReplacements;

- (void)dealloc;
- (id)description;
- (BOOL)isEnabled;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (struct OpaqueFigMutableComposition { } *)_mutableComposition;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end

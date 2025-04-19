@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEnabled;
- (id)asset;
- (struct CGSize { double x0; double x1; })dimensions;
- (id)mediaType;
- (int)trackID;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (unsigned int)_figMediaType;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (float)estimatedDataRate;
- (id)formatDescriptions;
- (struct CGSize { double x0; double x1; })naturalSize;
- (float)peakDataRate;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })samplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end

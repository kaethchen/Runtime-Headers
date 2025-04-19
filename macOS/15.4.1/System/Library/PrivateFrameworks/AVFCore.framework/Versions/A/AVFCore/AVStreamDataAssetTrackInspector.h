@class AVWeakReference;

@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector {
    AVWeakReference *_weakReferenceToAsset;
    int _trackID;
}

- (void)dealloc;
- (BOOL)isEnabled;
- (struct CGSize { double x0; double x1; })dimensions;
- (id)mediaType;
- (int)trackID;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (unsigned int)figMediaType;
- (id)formatDescriptions;
- (id)mediaCharacteristics;
- (struct CGSize { double x0; double x1; })naturalSize;

@end

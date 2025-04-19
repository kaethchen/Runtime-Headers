@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem { } *playbackItem;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)compatibleTrackForCompositionTrack:(id)a0;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 trackIDs:(id)a1;
- (id)lyrics;
- (id)metadataForFormat:(id)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)providesPreciseDurationAndTiming;
- (long long)trackCount;
- (id)trackIDs;

@end

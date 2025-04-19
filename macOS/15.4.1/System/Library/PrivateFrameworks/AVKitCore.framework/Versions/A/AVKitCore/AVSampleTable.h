@class NSArray, AVTrackIdentifier, AVAssetTrack;

@interface AVSampleTable : NSObject {
    NSArray *_table;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _trackTimeRange;
    long long _totalNumOfSamples;
    AVAssetTrack *_track;
}

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) AVTrackIdentifier *trackIdentifier;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, nonatomic) long long lastFrameIndex;

+ (id)keyPathsForValuesAffectingLoaded;
+ (id)sampleTableQueue;

- (void)load;
- (void).cxx_destruct;
- (id)initWithTrack:(id)a0;
- (BOOL)loaded;
- (void)_loadSampleTable;
- (long long)getFrameIndexForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getTimeRangeForFrameIndex:(long long)a0;

@end

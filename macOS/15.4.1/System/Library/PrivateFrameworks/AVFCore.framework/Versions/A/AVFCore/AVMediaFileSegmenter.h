@class NSURL, NSString, NSError;

@interface AVMediaFileSegmenter : NSObject {
    struct AVMediaFileSegmenterInternal { id x0; id x1; id x2; id x3; BOOL x4; BOOL x5; long long x6; id x7; long long x8; id x9; long long x10; id x11; float x12; id x13; id x14; struct OpaqueFigMediaFileSegmenter *x15; id /* block */ x16; struct { long long x0; int x1; unsigned int x2; long long x3; } x17; id x18; BOOL x19; BOOL x20; } *_mediaFileSegmenter;
}

@property (copy, nonatomic) NSURL *outputURL;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } targetSegmentDuration;
@property (copy, nonatomic) NSString *mediaPlaylistName;
@property (nonatomic) BOOL producesSingleFileOutput;
@property (nonatomic) BOOL segmentsAudioOnly;
@property (copy, nonatomic) NSString *IFramePlaylistName;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) float progress;

+ (id)_figMediaFileSegmenterNotificationNames;
+ (id)mediaFileSegmenterWithAsset:(id)a0 options:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)asset;
- (void)_updateProgress;
- (void)_addListeners;
- (id)_createFigMediaFileSegmenter:(struct OpaqueFigMediaFileSegmenter **)a0;
- (void)_createFigMediaFileSegmenterAndBeginSegmenting;
- (void)_handleFigMediaFileSegmenterNotification:(id)a0 payload:(id)a1;
- (void)_removeListeners;
- (void)_transitionToStatus:(long long)a0 error:(id)a1;
- (void)cancelMediaFileSegmentation;
- (id)initWithAsset:(id)a0 options:(id)a1;
- (id)mediaEndSeamIdentifier;
- (long long)mediaEndSeamSampleCount;
- (id)mediaStartSeamIdentifier;
- (long long)mediaStartSeamSampleCount;
- (void)segmentMediaFileAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)setMediaEndSeamIdentifier:(id)a0;
- (void)setMediaEndSeamSampleCount:(long long)a0;
- (void)setMediaStartSeamIdentifier:(id)a0;
- (void)setMediaStartSeamSampleCount:(long long)a0;

@end

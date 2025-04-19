@class PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PGSettlingEffectHighlightProcessor : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) struct { int numberOfHighlightCandidatesForFRC; int numberOfEliminationsThruSettlingEffectScore; int numberOfSettlingEffectScoresRequested; struct { int numberOfHighlightAssets; int numberOfHighlightCandidates; int numberOfEliminationsThruCrop; int numberOfEliminationsThruNotSafeForDisplay; int numberOfEliminationsThruKnownFRCFailure; int numberOfEliminationsThruDeviceOwner; } highlightStatistics; } statistics;

+ (BOOL)candidate:(id)a0 passesFilteringWithStatistics:(struct { int x0; int x1; int x2; struct { int x0; int x1; int x2; int x3; int x4; int x5; } x3; } *)a1;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)fetchHighlightCandidatesWithProgressReporter:(id)a0;
- (void)logStatistics:(struct { int x0; int x1; int x2; struct { int x0; int x1; int x2; int x3; int x4; int x5; } x3; })a0;

@end

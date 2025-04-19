@class AVTouchBarTrackView;
@protocol AVTouchBarTrackControlling, AVTimeControlling;

@interface AVTouchBarTrackViewController : NSViewController {
    BOOL _hasRoundedCorners;
}

@property (retain) id<AVTouchBarTrackControlling, AVTimeControlling> playerController;
@property (readonly) AVTouchBarTrackView *touchBarTrackView;
@property BOOL hasRoundedCorners;

+ (id)keyPathsForValuesAffectingTouchBarTrackView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (Class)_trackViewClass;
- (id)thumbnailForTime:(double)a0;

@end

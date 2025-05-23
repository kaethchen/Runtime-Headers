@class UXView, NSImage, UXImageView, NSMutableArray, PXFocusTimelineEvent;
@protocol PXFocusTimelineViewDelegate;

@interface PXFocusTimelineView : UXView {
    NSMutableArray *_focusEvents;
    NSMutableArray *_animatableFocusEvents;
    UXImageView *_trackImageView;
    UXView *_focusEventsView;
    UXView *_progressView;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentTrackingTime;
    PXFocusTimelineEvent *_objectTrackingEvent;
    BOOL _zoomed;
    double _zoomMinValue;
    double _zoomMaxValue;
}

@property (nonatomic) BOOL viewCanBeEnabled;
@property (weak, nonatomic) id<PXFocusTimelineViewDelegate> delegate;
@property (readonly, nonatomic) NSImage *autoFocusEventMarkerImage;
@property (readonly, nonatomic) NSImage *userInitiatedFocusEventMarkerImage;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) BOOL skipLayoutUpdates;
@property (nonatomic) BOOL dimmed;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackFrame;
- (void)unzoom;
- (void)_addEventToTimeline:(id)a0 atIndex:(unsigned long long)a1;
- (void)_animateFocusChangeFrom:(id)a0 to:(id)a1 completion:(id /* block */)a2;
- (id)_axDescriptionForFocusEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })_closestTickPointToPointOnTrack:(struct CGPoint { double x0; double x1; })a0;
- (id)_eventAtLocation:(struct CGPoint { double x0; double x1; })a0 threshold:(double)a1;
- (id)_imageViewForFocusEvent:(id)a0;
- (BOOL)_isEventWithinZoomRange:(id)a0;
- (BOOL)_isTickWithinActiveTrackRange:(double)a0;
- (struct CGPoint { double x0; double x1; })_trackPointFromTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_updateTrack;
- (void)_updateTrackingProgress;
- (double)_zoomAdjustedTickGap;
- (void)addFocusEvent:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 userInitiated:(BOOL)a1 shouldAnimate:(BOOL)a2;
- (void)enableUIForCinematographyScriptLoad:(BOOL)a0;
- (void)handleEventSelectedAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)objectTrackingFinishedWithSuccess:(BOOL)a0;
- (void)objectTrackingStartedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)resetTimeline;
- (void)setZoomMinValue:(double)a0 maxValue:(double)a1;
- (void)updateObjectTrackingProgressAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 shouldStop:(BOOL *)a1;
- (void)updateTimeline;

@end

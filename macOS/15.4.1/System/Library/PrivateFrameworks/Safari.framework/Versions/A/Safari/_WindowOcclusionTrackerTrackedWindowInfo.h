@class NSWindow;
@protocol WindowOcclusionTrackerObserver;

@interface _WindowOcclusionTrackerTrackedWindowInfo : NSObject {
    double _ratioOfOcclusion;
    BOOL _wasOccluded;
}

@property (readonly, nonatomic) NSWindow *window;
@property (weak, nonatomic) id<WindowOcclusionTrackerObserver> observer;

- (void).cxx_destruct;
- (void)_checkOcclusion:(id)a0;
- (BOOL)_isWindowOccluded:(id)a0;
- (id)initWithWindow:(id)a0 observer:(id)a1 ratioOfOcclusion:(double)a2;

@end

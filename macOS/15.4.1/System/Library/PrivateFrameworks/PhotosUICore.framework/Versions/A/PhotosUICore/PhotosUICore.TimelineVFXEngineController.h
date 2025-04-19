@interface PhotosUICore.TimelineVFXEngineController : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _spec;
    void /* unknown type, empty encoding */ world;
    void /* unknown type, empty encoding */ camera;
    void /* unknown type, empty encoding */ cameraAssemble;
    void /* unknown type, empty encoding */ cameraRipple;
    void /* unknown type, empty encoding */ cellTemplate;
    void /* unknown type, empty encoding */ _cells;
    void /* unknown type, empty encoding */ _cellStartingOffsetsPortrait;
    void /* unknown type, empty encoding */ _cellStartingOffsetsLandscape;
    void /* unknown type, empty encoding */ _cellsToBeRemoved;
    void /* unknown type, empty encoding */ _cellsToBeRecycled;
    void /* unknown type, empty encoding */ placeholderImages;
    void /* unknown type, empty encoding */ _images;
    void /* unknown type, empty encoding */ _outroImage;
    void /* unknown type, empty encoding */ cameraAnimations;
    void /* unknown type, empty encoding */ _nextImageIndex;
    void /* unknown type, empty encoding */ _nextPlaceholderImageIndex;
    void /* unknown type, empty encoding */ _paused;
    void /* unknown type, empty encoding */ _isFrozen;
    void /* unknown type, empty encoding */ _continuousAnimationStartTime;
    void /* unknown type, empty encoding */ _continuousAnimationPauseTime;
    void /* unknown type, empty encoding */ _dropTimer;
    void /* unknown type, empty encoding */ _permuteTimer;
    void /* unknown type, empty encoding */ _nextRippleCenter;
    void /* unknown type, empty encoding */ _lastRippleTime;
    void /* unknown type, empty encoding */ _isPortrait;
    void /* unknown type, empty encoding */ _isCompactHeight;
    void /* unknown type, empty encoding */ _viewSize;
    void /* unknown type, empty encoding */ _projectionDirection;
    void /* unknown type, empty encoding */ _completionHandler;
    void /* unknown type, empty encoding */ _preheatVFXWorldCompleted;
    void /* unknown type, empty encoding */ _preheatCompletionHandler;
    void /* unknown type, empty encoding */ _controllerQueueResetIteration;
    void /* unknown type, empty encoding */ _reduceMotion;
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)reduceMotionDidChange;

@end

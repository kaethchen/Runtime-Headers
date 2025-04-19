@class NSString;

@interface PXNumberFilter : PXObservable <PXMutableNumberFilter> {
    struct { BOOL output; } _needsUpdateFlags;
}

@property (nonatomic, setter=_setOutput:) double output;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double lastTime;
@property (readonly, nonatomic) double input;
@property (nonatomic) double time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setInput:(double)a0;
- (id)initWithInput:(double)a0;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_invalidateOutput;
- (void)didPerformChanges;
- (void)invalidateOutput;
- (id)mutableChangeObject;
- (void)_setLastTime:(double)a0;
- (void)_updateOutputIfNeeded;
- (double)initialOutputForInput:(double)a0;
- (double)updatedOutput;

@end

@class NSMutableArray;

@interface MPDisplayModeBucket : NSObject {
    float _minHeight;
    float _maxHeight;
    float _targetHeight;
    BOOL _usePreciseRate;
    NSMutableArray *_modes;
}

- (void)dealloc;
- (id)lowMode;
- (BOOL)modeFitsBucket:(id)a0;
- (BOOL)addModeToBucket:(id)a0;
- (id)bestMode;
- (id)bestModeForNativeHeight:(float)a0;
- (id)highMode;
- (id)initWithMinHeight:(float)a0 maxHeight:(float)a1 targetHeight:(float)a2 usingPreciseRate:(BOOL)a3;

@end

@class CBFloatArray, NSObject;
@protocol OS_os_log;

@interface PILABCurve : NSObject {
    float _currentLux;
    float _mappedNits;
    float _minNits;
    float _maxNits;
    CBFloatArray *_pilCurveLux;
    CBFloatArray *_pilCurveNits;
    unsigned long long _luxToNitsTableSize;
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) unsigned long long version;

- (void)dealloc;
- (id)description;
- (float)getNits;
- (id)initWithParams:(id)a0;
- (BOOL)setLux:(float)a0;
- (float)getLux;
- (float)getMaxNits;
- (float)getMinNits;
- (BOOL)initialiseCurveFrom:(id)a0;
- (void)initialiseToDefault;

@end

@class NSString, NSDictionary, NSObject;
@protocol OS_os_log;

@interface CBRamp : NSObject {
    double _sMachTimebaseFactor;
    NSObject<OS_os_log> *_logHandle;
}

@property (copy) id /* block */ rampProgressCallback;
@property (readonly) float length;
@property (readonly) float remainingLength;
@property (readonly) float frequency;
@property (readonly) float targetValue;
@property (readonly) float originalValue;
@property (readonly) float currentValue;
@property (readonly) double startTime;
@property (readonly) BOOL isFinished;
@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *properties;

+ (id)newLinearRampWithWithOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 identifier:(id)a4;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)clockRamp;
- (void)clockRamp:(double)a0;
- (id)initWithOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 identifier:(id)a4;
- (id)initWithOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 identifier:(id)a4 properties:(id)a5;
- (void)updateTargetValue:(float)a0;

@end

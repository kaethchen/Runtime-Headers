@class NSString;

@interface MRMotion : NSObject

@property (readonly) NSString *key;
@property (nonatomic) double startValue;
@property (readonly) double value;
@property (nonatomic) double startTime;
@property (readonly) double duration;
@property (readonly) double easeIn;
@property (readonly) double easeOut;

- (void)dealloc;
- (double)valueAtTime:(double)a0;
- (id)initWithKey:(id)a0 value:(double)a1 duration:(double)a2 easeIn:(double)a3 easeOut:(double)a4;

@end

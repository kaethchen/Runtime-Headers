@class HAWristTemperatureEnumerator;

@interface SRWristTemperatureEnumerator : NSEnumerator {
    HAWristTemperatureEnumerator *_enumerableHAWristTemperature;
}

+ (id)new;

- (void)dealloc;
- (id)init;
- (id)initWithHAWristTemperatureEnumerator:(id)a0;

@end

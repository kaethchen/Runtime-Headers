@class NSString;

@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)_prefixedKeyWithTimerKey:(id)a0;
+ (id)timerWithKey:(id)a0;

- (void).cxx_destruct;
- (void)start;
- (void)clear;
- (id)timerValue;
- (unsigned long long)elapsedSeconds;
- (unsigned long long)elapsedMilliSeconds;
- (unsigned long long)elapsedNanoseconds;

@end

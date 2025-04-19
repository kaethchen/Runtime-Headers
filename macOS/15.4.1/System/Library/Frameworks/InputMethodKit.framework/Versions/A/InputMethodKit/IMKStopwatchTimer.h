@class NSDate;

@interface IMKStopwatchTimer : NSObject

@property (retain, nonatomic) NSDate *beginning;
@property (retain, nonatomic) NSDate *currentDate;

+ (id)timer;

- (id)init;
- (void)clickStopwatch:(id)a0 forClass:(Class)a1 selector:(SEL)a2;

@end

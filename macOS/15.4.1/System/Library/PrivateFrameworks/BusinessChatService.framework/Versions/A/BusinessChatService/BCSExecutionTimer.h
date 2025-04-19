@interface BCSExecutionTimer : NSObject

@property (nonatomic) unsigned long long startTime;
@property (readonly, nonatomic) unsigned long long nanoseconds;
@property (readonly, nonatomic) unsigned long long milliseconds;
@property (readonly, nonatomic) unsigned long long seconds;

+ (unsigned long long)timeExecutionOfBlock:(id /* block */)a0;

- (id)init;

@end

@class NSString, NSDictionary;

@interface CalculateScanRequest : NSObject

@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ resultHandler;

+ (void)_unlock;
+ (id)concurrentQueue;
+ (void)_lock;

- (void).cxx_destruct;
- (void)cancel;
- (void)update;

@end

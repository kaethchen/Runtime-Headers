@class NSString, NSDictionary, CalculateResult, NSError;

@interface CalculateRequest : NSObject

@property (retain, nonatomic) NSString *expression;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) CalculateResult *result;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ resultHandler;

+ (id)serialQueue;
+ (void)_unlock;
+ (void)_lock;

- (void).cxx_destruct;
- (void)finish;
- (void)cancel;
- (void)evaluate;
- (void)update;

@end

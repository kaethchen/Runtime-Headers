@class NSError;

@interface AAFExponentialRetryScheduler : NSObject {
    void /* unknown type, empty encoding */ maxRetries;
    void /* unknown type, empty encoding */ power;
    void /* unknown type, empty encoding */ schedulerDelay;
    void /* unknown type, empty encoding */ currentRetry;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithMaxRetries:(long long)a0;
- (void)scheduleTask:(void (^)(void (^)(id, NSError *)))a0 shouldRetry:(BOOL (^)(NSError *))a1 completionHandler:(void (^)(id, NSError *))a2;
- (id)initWithMaxRetries:(long long)a0 power:(double)a1;

@end

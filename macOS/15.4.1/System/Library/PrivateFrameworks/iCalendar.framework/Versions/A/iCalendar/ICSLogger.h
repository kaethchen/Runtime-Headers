@protocol ICSLoggingDelegate;

@interface ICSLogger : NSObject {
    int _logCount;
    id<ICSLoggingDelegate> _loggingDelegate;
}

+ (void)setDelegate:(id)a0;
+ (id)sharedInstance;
+ (void)logAtLevel:(long long)a0 forTokenizer:(id)a1 message:(id)a2;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)logAtLevel:(long long)a0 forTokenizer:(id)a1 format:(id)a2 args:(char *)a3;

@end

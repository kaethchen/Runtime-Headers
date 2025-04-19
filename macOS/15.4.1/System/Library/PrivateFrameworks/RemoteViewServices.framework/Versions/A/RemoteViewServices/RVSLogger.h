@class NSString;

@interface RVSLogger : NSObject {
    NSString *_name;
}

+ (id)defaultLogger;
+ (id)loggerWithName:(id)a0;

- (void).cxx_destruct;
- (id)_initWithName:(id)a0;
- (void)_logMessage:(id)a0 values:(char *)a1;
- (void)debug:(id)a0;

@end

@interface IOKPowerManager : NSObject {
    unsigned int _connection;
}

+ (BOOL)isSleepEnabled;
+ (id)powerManager;

- (void)dealloc;
- (id)init;
- (BOOL)sleepSystemWithError:(id *)a0;

@end

@class NSString, BRCPQLConnection;

@interface BRCNamedThrottleManager : NSObject {
    BRCPQLConnection *_db;
    NSString *_currentOSVersion;
}

- (void).cxx_destruct;
- (id)initWithDB:(id)a0;
- (void)cleanNamedThrottleTable:(id)a0;
- (void)dumpToContext:(id)a0;
- (void)throttle:(id)a0 subCategory:(id)a1 withRules:(id)a2 onQueue:(id)a3 block:(id /* block */)a4;

@end

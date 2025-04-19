@class NSString;

@interface IMNetworkMonitor : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ evaluator;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ networkAvailable;
}

@property (nonatomic, readonly) NSString *remoteHost;
@property (nonatomic, readonly) BOOL immediatelyReachable;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithRemoteHost:(id)a0 delegate:(id)a1;
- (id)initWithRemoteHost:(id)a0 delegate:(id)a1 supportsConstrainedNetwork:(BOOL)a2;

@end

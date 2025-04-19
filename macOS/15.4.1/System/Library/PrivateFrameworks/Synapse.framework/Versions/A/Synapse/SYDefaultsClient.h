@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYDefaultsClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidateConnection;
- (void)_configureConnectionAndResume;
- (void)_createConnectionIfNeeded;
- (void)indicatorCoverageWithCompletion:(id /* block */)a0;
- (void)setIndicatorCoverage:(long long)a0 completion:(id /* block */)a1;

@end

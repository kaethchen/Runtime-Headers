@class NSString, NSArray, NSFileHandle, NSError;

@interface NPTKit.NetworkPerformanceTesterDClient : _TtCs12_SwiftObject <NPTKit.NPTDServices> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ server;
}

- (void)getPrivilegedFileHandleForPacketCaptureWithCompletionHandler:(void (^)(NSFileHandle *, NSError *))a0;
- (void)getPrivilegedFileHandleForPath:(NSString *)a0 completionHandler:(void (^)(NSFileHandle *, NSError *))a1;
- (void)startLocalPerformanceTestWith:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopLocalPerformanceTest:(id /* block */)a0;
- (void)testServiceWithArguments:(NSArray *)a0 completionHandler:(void (^)(long long, NSString *))a1;

@end

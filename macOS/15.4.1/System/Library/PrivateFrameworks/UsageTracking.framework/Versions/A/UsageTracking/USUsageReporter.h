@class NSXPCConnection;

@interface USUsageReporter : NSObject

@property (readonly) NSXPCConnection *xpcConnection;

+ (id)getLocalDeviceIdentifierAndReturnError:(id *)a0;
+ (void)synchronizeUsageWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)getLocalDeviceIdentifierAndReturnError:(id *)a0;
- (id)fetchUsageForApplications:(id)a0 webDomains:(id)a1 categories:(id)a2 interval:(id)a3 error:(id *)a4;
- (void)fetchReportsDuringInterval:(id)a0 partitionInterval:(double)a1 completionHandler:(id /* block */)a2;
- (void)fetchReportsDuringInterval:(id)a0 partitionInterval:(double)a1 forceImmediateSync:(BOOL)a2 completionHandler:(id /* block */)a3;

@end

@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface FPRTCReportingSessionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
}

@property (class, readonly, nonatomic) NSDictionary *sessionInfo;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (void)postMultipleReports:(id)a0 type:(unsigned long long)a1 userinfo:(id)a2 session:(id)a3 observer:(id)a4;
- (id)sessionForProviderID:(id)a0 version:(id)a1;
- (id)sessionWithCommonProperties:(id)a0;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 error:(id)a3 decoratedPayload:(id)a4 session:(id)a5 observer:(id)a6;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 userinfo:(id)a3 error:(id)a4 decoratedPayload:(id)a5 session:(id)a6 observer:(id)a7;
- (id)sessionForDomainID:(id)a0 providerVersion:(id)a1;
- (void)waitUntilTelemetrySessionIsAvailable:(unsigned long long)a0 retryDuration:(unsigned long long)a1;

@end

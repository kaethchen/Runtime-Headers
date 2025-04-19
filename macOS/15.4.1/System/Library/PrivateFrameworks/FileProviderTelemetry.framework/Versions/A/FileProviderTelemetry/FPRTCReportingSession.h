@class NSString, NSMutableDictionary, FPRTCReportingSessionManager;
@protocol FPRTCReportingObserver;

@interface FPRTCReportingSession : NSObject {
    NSMutableDictionary *_commonProperties;
    NSString *_providerID;
    NSString *_providerVersion;
    FPRTCReportingSessionManager *_backingManager;
    id<FPRTCReportingObserver> _observer;
    NSMutableDictionary *_categoryHooks;
}

- (id)description;
- (void).cxx_destruct;
- (void)setObserver:(id)a0;
- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (BOOL)flushMessagesSynchronouslyWithError:(id *)a0;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 error:(id)a3;
- (void)setModifyDecoratedPayloadHook:(id /* block */)a0 forCategory:(unsigned long long)a1;
- (void)executeModifyDecoratedPayloadHook:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 error:(id)a3 decoratedPayload:(id)a4;
- (id)initWithWithCommonProperties:(id)a0 manager:(id)a1;
- (id)truncateProviderVersion:(id)a0;

@end

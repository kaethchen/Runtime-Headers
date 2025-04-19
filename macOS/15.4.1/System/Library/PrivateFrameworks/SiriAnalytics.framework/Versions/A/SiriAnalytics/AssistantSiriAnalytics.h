@class SiriAnalyticsRemoteService;

@interface AssistantSiriAnalytics : SiriAnalyticsClient {
    BOOL _isInternalInstall;
    SiriAnalyticsRemoteService *_remoteService;
}

+ (id)sharedAnalytics;
+ (id)sharedStream;
+ (id)derivedIdentifierForComponentName:(int)a0 fromSourceIdentifier:(id)a1;
+ (id)derivedIdentifierForComponent:(int)a0 fromSourceIdentifier:(id)a1;
+ (void)derivedIdentifierForComponent:(int)a0 fromSourceIdentifier:(id)a1 completion:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (void)createTag:(id)a0 completion:(id /* block */)a1;
- (BOOL)clientMessageStream:(id)a0 shouldEmitMessage:(id)a1 timestamp:(unsigned long long)a2 isolatedStreamUUID:(id)a3;
- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;

@end

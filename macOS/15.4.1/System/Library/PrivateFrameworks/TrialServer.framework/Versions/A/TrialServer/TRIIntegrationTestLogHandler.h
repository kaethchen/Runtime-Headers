@class NSString;

@interface TRIIntegrationTestLogHandler : NSObject <TRILogHandling> {
    NSString *_tempDir;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addTestLoggerInPlaceOnClient:(id)a0;
+ (BOOL)shouldUseOverrideLogHandler;

- (id)init;
- (void).cxx_destruct;
- (void)logEvent:(id)a0 subgroupName:(id)a1 queue:(id)a2;

@end

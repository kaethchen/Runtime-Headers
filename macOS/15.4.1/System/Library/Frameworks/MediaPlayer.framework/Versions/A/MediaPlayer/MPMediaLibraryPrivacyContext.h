@class MPGreenTeaLoggerWrapper;

@interface MPMediaLibraryPrivacyContext : NSObject {
    MPGreenTeaLoggerWrapper *_gtLogger;
}

+ (void)initialize;
+ (void)setDefaultClientWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)contextForDefaultClient;
+ (id)sharedContextForCurrentProcess;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)beginAccessInterval;
- (void)endAccessInterval;
- (id)initWithClientIdentity:(id)a0;
- (id)initWithPAApplication:(id)a0;
- (void)logPrivacyAccess;

@end

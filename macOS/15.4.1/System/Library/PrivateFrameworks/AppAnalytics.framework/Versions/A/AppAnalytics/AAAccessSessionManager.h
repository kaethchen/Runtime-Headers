@interface AAAccessSessionManager : NSObject {
    void /* unknown type, empty encoding */ accessSessionManager;
}

@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, readonly) BOOL isDiagnosticSubmissionAllowed;

- (id)init;
- (void).cxx_destruct;
- (void)pushSessionData:(id)a0;
- (void)pushSessionData:(id)a0 submitEventQueues:(BOOL)a1;
- (void)pushSessionData:(id)a0 traits:(id)a1;
- (void)pushSessionData:(id)a0 traits:(id)a1 submitEventQueues:(BOOL)a2;

@end

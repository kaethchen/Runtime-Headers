@class EMRemoteContentURLSession, NSMutableDictionary, EDMessagePersistence, EDMarkCertificateVerifier, NSConditionLock;
@protocol EFScheduler;

@interface EDBIMIManager : NSObject {
    NSMutableDictionary *_activeDataTasksByRequest;
    NSConditionLock *_activeDataTasksLock;
    NSConditionLock *_verificationRunningLock;
}

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession;
@property (readonly, nonatomic) EDMarkCertificateVerifier *markCertificateVerifier;
@property (readonly, nonatomic) id<EFScheduler> verificationScheduler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)downloadAndVerifyIndicatorsIfNeeded;
- (id)initWithMessagePersistence:(id)a0 urlSession:(id)a1;
- (id)processBIMIHeadersForMessages:(id)a0 evidenceAndMessagesNeedingVerification:(id *)a1;
- (void)test_tearDown;

@end

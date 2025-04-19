@class NSString, CATTaskClient, NSError;
@protocol CRKTransportProviding;

@interface CRKSingleConnectionAttemptStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol> {
    id<CRKTransportProviding> mTransportProvider;
    CATTaskClient *mTaskClient;
    NSError *mError;
    BOOL mDidAttemptToConnect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)connect;
- (void)client:(id)a0 didInterruptWithError:(id)a1;
- (void)connectIfNeeded;
- (id)initWithTransportProvider:(id)a0;
- (id)operationForRequest:(id)a0;

@end

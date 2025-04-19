@class NSString, NSMutableDictionary;

@interface HMDXPCMessageReportingSessionManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableDictionary *sessionsByUUID;
@property (copy) id /* block */ endSessionTimerFactory;
@property (copy) id /* block */ consumeSessionResultsTimerFactory;
@property (copy) id /* block */ performBackgroundRequestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)addResponseMessagePayload:(id)a0 toSessionWithUUID:(id)a1;
- (id)consumeResponseMessagePayloadsForSessionWithReportContextRequestInfo:(id)a0;
- (void)endSessionWithUUID:(id)a0;
- (void)startSessionWithUUID:(id)a0 reportContext:(id)a1 xpcClientConnection:(id)a2;

@end

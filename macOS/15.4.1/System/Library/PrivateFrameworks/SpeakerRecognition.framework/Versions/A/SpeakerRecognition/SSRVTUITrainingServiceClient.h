@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, SSRVTUITrainingServiceDelegate;

@interface SSRVTUITrainingServiceClient : NSObject <SSRVTUITrainingServiceDelegate, SSRVTUITrainingService> {
    NSString *_localeIdentifier;
    NSString *_appDomain;
    NSString *_siriSharedUserId;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id remoteObjectProxy;
@property (weak, nonatomic) id<SSRVTUITrainingServiceDelegate> delegate;
@property (copy, nonatomic) id /* block */ prepareCompletion;
@property (copy, nonatomic) id /* block */ cleanupCompletion;
@property (copy, nonatomic) id /* block */ trainCompletion;
@property (copy, nonatomic) id /* block */ trainCompletionWithResult;
@property (nonatomic) BOOL requireResetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (void)reset;
- (id)_connection;
- (void)setLocaleIdentifier:(id)a0;
- (id)_newConnection;
- (id)_service;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)CSVTUIRemoteTrainingSessionRMSAvailable:(float)a0;
- (void)stopRMS;
- (void)_handleXPCDisconnectedUnexpectedlyWithError:(id)a0;
- (void)_resetupIfNeeded;
- (void)audioSourceWithCompletion:(id /* block */)a0;
- (void)cancelTrainingViaXPCForID:(long long)a0;
- (void)cleanupViaXPCWithCompletion:(id /* block */)a0;
- (void)didDetectForceEndPoint;
- (void)getAudioSessionID:(id /* block */)a0;
- (void)playSoundEffectWithAudioTone:(int)a0;
- (void)setupWithLocaleID:(id)a0 appDomain:(id)a1 siriSharedUserId:(id)a2;
- (void)startRMS;
- (void)trainUtteranceViaXPC:(long long)a0 shouldUseASR:(BOOL)a1 completion:(id /* block */)a2;
- (void)trainUtteranceViaXPC:(long long)a0 shouldUseASR:(BOOL)a1 mhUUID:(id)a2 completionWithResult:(id /* block */)a3;
- (void)voiceProfileWithCompletion:(id /* block */)a0;

@end

@class NSString;
@protocol NFHCESessionDelegate;

@interface NFHCESession : NFSession <NFHostEmulationSessionCallbacks> {
    id<NFHCESessionDelegate> _delegate;
}

@property id<NFHCESessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endSession;
- (void)restartDiscovery;
- (void)didReceiveAPDU:(id)a0;
- (id)sendAPDU:(id)a0 startReadOnCompletion:(BOOL)a1;
- (void)didConnectToReader;
- (void)didDisconnectFromReader;
- (void)didEndUnexpectedly;
- (void)didReceiveField:(id)a0;
- (id)readAPDU:(id *)a0;
- (void)readAPDUWithCompletion:(id /* block */)a0;
- (id)requestEmulationAssertion:(double)a0;
- (void)resumeSessionFromWaitingOnFieldWithCompletion:(id /* block */)a0;
- (id)sendAPDU:(id)a0;
- (id)startEmulation;
- (id)stopEmulation;
- (void)suspensionStateUpdate:(BOOL)a0 triggeredByField:(id)a1;

@end

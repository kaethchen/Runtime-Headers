@class NSXPCConnection;

@interface AMFIConnection : NSObject {
    NSXPCConnection *connection;
}

+ (id)newConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)commitProfileForUuid:(id)a0;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0; struct { unsigned int x0; unsigned char x1[32]; } x1; } x3; })getSEPStateWithError:(id *)a0;
- (id)getStagedProfileWithError:(id *)a0;
- (id)initiateDataMigration;
- (id)initiateDeveloperModeDaemons;
- (id)removeManagedState;
- (id)removeTrustforUuid:(id)a0;
- (id)setDemoState:(unsigned int)a0;
- (id)setManagedState:(id)a0;
- (id)setSupervisedState:(unsigned int)a0;
- (id)setTrustForUuid:(id)a0 withSignature:(id)a1 withSignType:(unsigned int)a2;
- (id)signTeamID:(id)a0 withSignType:(unsigned int)a1 withLAContext:(id)a2 withError:(id *)a3;
- (id)stageProfileForUuid:(id)a0;

@end

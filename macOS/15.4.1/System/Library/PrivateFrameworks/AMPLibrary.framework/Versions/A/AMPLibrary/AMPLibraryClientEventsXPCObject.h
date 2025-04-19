@protocol AMPLMediaAppClientEventsProtocol;

@interface AMPLibraryClientEventsXPCObject : NSObject <AMPLibraryClientEventsProtocol>

@property (weak, nonatomic) id<AMPLMediaAppClientEventsProtocol> eventsDelegate;

- (void).cxx_destruct;
- (void)notifyCloudClientFlagsChangeEventForClientID:(unsigned int)a0 forFlag:(unsigned int)a1 withValue:(BOOL)a2;
- (void)notifyAuthenticateCloudServer:(unsigned int)a0;
- (void)notifyCloudAddTooManyCloudTracksError:(int)a0;
- (void)notifyCloudClientRemoteLoadStateEventForClientID:(unsigned int)a0 newState:(unsigned int)a1;
- (void)notifyCloudClientStateChangeEventForClientID:(unsigned int)a0 newState:(unsigned int)a1;
- (void)notifyCloudDAAPServerMessage:(unsigned int)a0 withKind:(unsigned int)a1 withFlag:(BOOL)a2 withStatus:(int)a3;
- (void)notifyCloudEditCommandStateChanged:(unsigned long long)a0 newState:(unsigned char)a1 optionalFinalStatus:(int)a2 optionalFetched:(BOOL)a3 optionalAddedPersistentIDs:(id)a4;
- (void)notifyCloudTrackRedownload:(unsigned int)a0 forPersistentIDs:(id)a1;
- (void)notifyLibraryBusyStateChange:(BOOL)a0;
- (void)notifyLibraryCommandComplete:(id)a0 forClientID:(unsigned int)a1 forCommandID:(unsigned int)a2;
- (void)notifyLibraryRevisionChange:(unsigned int)a0;
- (void)notifyShowCloudServerErrorForClientID:(unsigned int)a0 error:(int)a1;
- (void)notifyShowHideCloudUIForClientID:(unsigned int)a0;
- (void)synchronousCancelUploadLibraryClientCommand:(unsigned int)a0 withReply:(id /* block */)a1;
- (void)synchronousIsProcessingNewTrackForUpload:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)synchronousNotifyClientDisableIsComplete;
- (void)synchronousStartUploadLibraryClientCommand:(unsigned int)a0 withReply:(id /* block */)a1;
- (void)triggerCheckForNewCloudTracks:(BOOL)a0 withFinishImport:(BOOL)a1 withReply:(id /* block */)a2;

@end

@class NSError, NSString, MPRemoteCommandEvent, MPRemoteCommandStatus, MPAVItem, MPSetPlaybackQueueCommandEvent, MPNowPlayingInfoTransportableSessionResponse, MPSetPlaybackSessionCommandEvent;
@protocol MPNowPlayingInfoTransportableSessionRequest;

@interface _MPCMediaRemotePublisher_Swift : NSObject {
    void /* unknown type, empty encoding */ publisher;
    void /* unknown type, empty encoding */ dialogHandler;
    void /* unknown type, empty encoding */ migrationRequirementsFilter;
}

- (id)init;
- (void).cxx_destruct;
- (id)processStatus:(id)a0 withCommandEvent:(id)a1;
- (void)delegateAccountEvent:(MPRemoteCommandEvent *)a0 completion:(void (^)(MPRemoteCommandStatus *))a1;
- (void)didChangeAccounts:(id)a0;
- (void)didEndMigrationWithIdentifier:(NSString *)a0 error:(NSError *)a1 completion:(void (^)(void))a2;
- (void)findContentItemIDWithIncomingContentItemID:(NSString *)a0 trackID:(long long)a1 completion:(void (^)(NSString *, NSError *))a2;
- (id)getMigrationRequirementsFilterData;
- (BOOL)getRequestingImmediatePlaybackFromSetPlaybackSessionCommandEvent:(id)a0;
- (id)getSwiftQOSDialogForError:(id)a0 withItem:(id)a1;
- (void)getTransportablePlaybackSessionRepresentationForRequest:(id<MPNowPlayingInfoTransportableSessionRequest>)a0 completion:(void (^)(MPNowPlayingInfoTransportableSessionResponse *, NSError *))a1;
- (id)initWithPublisher:(id)a0;
- (void)performDialogActionForCommandEvent:(MPRemoteCommandEvent *)a0 completion:(void (^)(NSError *))a1;
- (void)performSetQueueWithEvent:(MPSetPlaybackQueueCommandEvent *)a0 installQueueBeforeLoaded:(BOOL)a1 donatedStartPlayerItem:(MPAVItem *)a2 completion:(void (^)(NSError *))a3;
- (void)performSetSessionWithEvent:(MPSetPlaybackSessionCommandEvent *)a0 completion:(void (^)(NSError *))a1;
- (BOOL)sonicStageCondition:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (void)willBeginSessionMigrationWithIdentifier:(id)a0;

@end

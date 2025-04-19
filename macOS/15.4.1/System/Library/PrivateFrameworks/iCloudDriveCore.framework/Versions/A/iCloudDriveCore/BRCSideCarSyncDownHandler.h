@class BRCApplyScheduler, BRCSideCarSyncPersistedState, BRCServerPersistedState;
@protocol BRCSessionContext;

@interface BRCSideCarSyncDownHandler : NSObject {
    id<BRCSessionContext> _sessionContext;
    BRCSideCarSyncPersistedState *_sideCarPersistedState;
    BRCServerPersistedState *_serverPersistedState;
    BRCApplyScheduler *_applyScheduler;
}

- (void).cxx_destruct;
- (id)initWithSessionContext:(id)a0 sideCarPersistedState:(id)a1 serverPersistedState:(id)a2 applyScheduler:(id)a3;
- (void)saveChangedRecords:(id)a0 deletedRecords:(id)a1 serverChangeToken:(id)a2 clientChangeToken:(id)a3;

@end

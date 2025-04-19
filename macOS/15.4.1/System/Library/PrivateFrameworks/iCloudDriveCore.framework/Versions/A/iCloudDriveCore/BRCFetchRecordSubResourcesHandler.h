@class BRCServerZone, BRCApplyScheduler;
@protocol BRCSessionContext;

@interface BRCFetchRecordSubResourcesHandler : NSObject {
    BRCApplyScheduler *_applyScheduler;
    BRCServerZone *_serverZone;
    id<BRCSessionContext> _sessionContext;
}

- (void).cxx_destruct;
- (id)initWithSessionContext:(id)a0 serverZone:(id)a1 applyScheduler:(id)a2;
- (BOOL)saveChangedRecords:(id)a0 deletedRecordIDs:(id)a1 deletedShareRecordIDs:(id)a2 clientChangeToken:(unsigned long long)a3 serverChangeToken:(id)a4 caughtUp:(BOOL)a5 pendingChanges:(id)a6;
- (void)zoneRankWasUpdatedToRank:(long long)a0;

@end

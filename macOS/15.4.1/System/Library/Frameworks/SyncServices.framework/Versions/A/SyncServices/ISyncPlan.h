@class NSString, ISyncManager, NSArray, NSCalendarDate;

@interface ISyncPlan : NSObject {
    ISyncManager *_syncManager;
    NSString *_planId;
    NSCalendarDate *_createDate;
    NSCalendarDate *_startDate;
    NSCalendarDate *_endDate;
    NSArray *_participantInfos;
    NSString *_syncPhase;
    int _syncStatus;
}

- (void)dealloc;
- (void)finalize;
- (id)endDate;
- (id)startDate;
- (id)participants;
- (id)entityNames;
- (void)setSyncStatus:(int)a0;
- (id)planIdentifier;
- (id)createDate;
- (int)syncStatus;
- (void)_fetchChanges;
- (void)cancelSyncing;
- (id)entityNamesForClient:(id)a0;
- (id)initWithSyncManager:(id)a0 planIdentifier:(id)a1;
- (id)syncPhaseDescription;

@end

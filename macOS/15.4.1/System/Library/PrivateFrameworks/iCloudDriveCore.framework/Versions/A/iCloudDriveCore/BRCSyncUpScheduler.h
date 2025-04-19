@class NSString;

@interface BRCSyncUpScheduler : BRCFSSchedulerBase <BRCSyncUpCallbackProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)schedule;
- (void)createSyncUpJobForRowID:(unsigned long long)a0 inZone:(id)a1;
- (void)_clearSyncUpErrorForItem:(id)a0;
- (void)_scheduleSyncUpJob:(id)a0;
- (void)_scheduleSyncUpJobForZoneWithRowID:(id)a0;
- (void)blockSyncUpCallback:(id)a0 inZone:(id)a1;
- (void)createSyncUpJobForItem:(id)a0 inZone:(id)a1;
- (void)deleteSyncUpJobsForItem:(id)a0;
- (id)descriptionForItem:(id)a0 context:(id)a1;
- (unsigned long long)finishSyncUpForItem:(id)a0 inZone:(id)a1 success:(BOOL)a2;
- (void)ineligibleSyncUpCallback:(id)a0 inZone:(id)a1;
- (id)initWithAccountSession:(id)a0;
- (BOOL)isItemPendingSyncUp:(id)a0;
- (void)performFirstSchedulingAfterStartupInDB:(id)a0;
- (unsigned long long)postponeSyncUpCallback:(id)a0 inZone:(id)a1;
- (void)prepareItemForSyncUp:(id)a0 inFlightDiffs:(unsigned long long)a1 inZone:(id)a2;
- (unsigned long long)recoverAndReportMissingJobs;
- (void)setState:(int)a0 forItem:(id)a1 zone:(id)a2;

@end

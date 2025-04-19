@class NSMutableDictionary, BRDarwinNotifySender, NSDate, NSNumber;

@interface BRCUploadConstraintChecker : NSObject {
    long long _availableSizeForUpload;
    NSNumber *_maxBytesForSingleItemUploadOnCellular;
    NSDate *_lastMidnightDate;
    NSMutableDictionary *_personaIDToRescheduleSuspendedJobsBlock;
    NSMutableDictionary *_personaIDToNoSpaceExecutionBlock;
    NSNumber *_isInSyncBubble;
    NSDate *_lastOverrideDate;
    double _overrideUploadsOnCellularForTimeLimit;
    BRDarwinNotifySender *_cellularConstraintsNotifier;
    NSNumber *_unlimitedUpdates;
}

+ (id)defaultChecker;

- (void).cxx_destruct;
- (id)_init;
- (BOOL)_isUnlimitedUpdatesOverCellular;
- (BOOL)_areConstraintsOverriden;
- (void)_rescheduleAndResetAvailableSizeAndDateIfNeededWithDidReset:(BOOL *)a0;
- (BOOL)_resetAvailableSizeAndDateIfNeeded;
- (void)_scheduleNoSpaceExecutionBlocksWithAvailableSpace:(long long)a0;
- (void)addNoSpaceExecutionBlock:(id /* block */)a0 forPersonaID:(id)a1;
- (void)addRescheduleSuspendedJobsBlock:(id /* block */)a0 forPersonaID:(id)a1;
- (id)availableSizeForUpload;
- (BOOL)canUploadItemWithSize:(unsigned long long)a0 itemScope:(unsigned char)a1 withError:(id *)a2;
- (void)overrideConstraints;
- (void)rescheduleAndResetAvailableSizeAndDateIfNeeded;
- (void)sendCellularConstraintNotification;
- (void)setUnlimitedUpdatesWithEnablementStatus:(BOOL)a0;
- (void)updateWithUploadedBytesSize:(unsigned long long)a0;

@end

@class NSString, MSPBTimerContext, NSObject;
@protocol OS_dispatch_queue, MSPowerBudgetDelegate;

@interface MSPowerBudget : NSObject

@property (nonatomic, setter=workQueueSetFileTransferAllowed:) BOOL workQueueIsFileTransferAllowed;
@property (nonatomic, setter=workQueueSetExternalPowered:) BOOL workQueueIsExternalPowered;
@property (nonatomic, setter=workQueueSetForeground:) BOOL workQueueIsForeground;
@property (retain, nonatomic) MSPBTimerContext *workQueuePushTimerContext;
@property (retain, nonatomic) MSPBTimerContext *workQueuePostForegroundTimerContext;
@property (retain, nonatomic) MSPBTimerContext *workQueueGlobalResetSyncTimerContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) id<MSPowerBudgetDelegate> delegate;
@property (nonatomic) double maxActiveTimeAfterPush;
@property (nonatomic) double maxActiveTimeAfterLossOfForeground;
@property (nonatomic) double maxActiveTimeAfterGlobalResetSync;
@property (retain, nonatomic) NSString *focusAlbumGUID;
@property (retain, nonatomic) NSString *focusAssetCollectionGUID;
@property (retain, nonatomic) NSString *personID;
@property (readonly, nonatomic, getter=isFileTransferAllowed) BOOL fileTransferAllowed;
@property (readonly, nonatomic, getter=hasForegroundFocus) BOOL foregroundFocus;
@property (readonly, nonatomic) BOOL hasActiveTimers;

- (id)init;
- (void).cxx_destruct;
- (void)_globalResetSyncTimerDidExpire:(id)a0;
- (double)workQueueMaxActiveTimeAfterPush;
- (void)_postForegroundTimerDidExpire:(id)a0;
- (void)didBeginExternalPower;
- (void)didBeginForegroundFocus;
- (void)didEndExternalPower;
- (void)didEndForegroundFocus;
- (void)didReceiveGlobalResetSync;
- (void)didReceivePushNotification;
- (void)setIsFileTransferAllowed:(BOOL)a0;
- (void)shutDown;
- (void)workQueueCommitPersistedValues;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
- (void)workQueueRecomputeFileTransferAllowed;
- (void)workQueueSetGlobalResetSyncTimerDate:(id)a0;
- (void)workQueueSetIsFileTransferAllowed:(BOOL)a0;
- (void)workQueueSetPostForegroundTimerDate:(id)a0;
- (void)workQueueSetPushTimerDate:(id)a0;

@end

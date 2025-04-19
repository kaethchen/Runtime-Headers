@class ECFlagChangeMessageAction;

@interface MFEWSFlagChangeSyncOperation : MFEWSMessageActionSyncOperation

@property (readonly, nonatomic) ECFlagChangeMessageAction *messageAction;

- (void)main;
- (BOOL)_batchedSetFlagsForItems:(id)a0 inFolder:(id)a1 messageType:(char)a2 flagChange:(id)a3 error:(id *)a4;
- (id)initWithMessageAction:(id)a0;

@end

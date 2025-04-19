@class ECTransferMessageAction;

@interface MFEWSTransferActionSyncOperation : MFEWSMessageActionSyncOperation

@property (readonly, nonatomic) ECTransferMessageAction *messageAction;

- (void)main;
- (id)initWithMessageAction:(id)a0;

@end

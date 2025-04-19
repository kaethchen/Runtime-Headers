@class TKSmartCardSlot, NSMutableArray, NSHashTable;

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification> {
    TKSmartCardSlot *_slot;
    NSMutableArray *_queuedParameters;
}

@property (readonly) NSHashTable *cards;

- (void).cxx_destruct;
- (id)initWithSlot:(id)a0;
- (void)slotInitialized;
- (void)cardSessionRequested;
- (void)notifyWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)processNotificationParameters:(id)a0;

@end

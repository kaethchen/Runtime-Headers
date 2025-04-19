@class NSString;

@interface BMDistributedContextEventTranslation : NSObject {
    NSString *_localDeviceIdentifier;
}

- (void).cxx_destruct;
- (id)translateEvent:(id)a0;
- (id)contextSyncAppInFocusFromEvent:(id)a0;
- (id)contextSyncActivityLevelEventFromEvent:(id)a0;
- (id)contextSyncCellularStatusFromEvent:(id)a0;
- (id)contextSyncLOIFromSemanticLocationEvent:(id)a0;
- (id)contextSyncWalletTransactionFromEvent:(id)a0;
- (id)initWithLocalDeviceIdentifier:(id)a0;

@end

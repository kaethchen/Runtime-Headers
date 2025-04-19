@class NSArray, NSMutableArray;

@interface CWFNetworkDenyList : NSObject {
    unsigned long long _profile;
    NSMutableArray *_denyList;
}

@property (copy) id /* block */ batteryInfoHandler;
@property (copy) id /* block */ isUserModeInteractiveHandler;
@property (copy) id /* block */ denyListDidUpdateHandler;
@property BOOL enabled;
@property (retain) NSArray *SSIDThresholds;
@property (retain) NSArray *BSSIDThresholds;
@property double wowDenyListExpiry;
@property double networkDenyListExpiry;
@property double BSSDenyListExpiry;

- (void).cxx_destruct;
- (long long)RSSIWhenNetworkWasDenyListed:(id)a0;
- (id)reasonsForNetworkInDenyListedState:(id)a0 state:(unsigned long long)a1 timestamps:(id)a2 reasonData:(id)a3;
- (void)processDenyListedBSSForMetrics:(id)a0;
- (BOOL)_evaluateTriggersForDenyListRemove:(id)a0 denyListRemoveReason:(unsigned long long)a1 SSID:(id)a2;
- (BOOL)_evaluateTriggersForDenyListing:(id)a0 reason:(unsigned long long)a1 reasonData:(long long)a2 BSSID:(id)a3 SSID:(id)a4 state:(unsigned long long)a5;
- (id)_findNetworkDenyListItem:(id)a0;
- (id)_findNetworkDenyListItemsForSSID:(id)a0;
- (BOOL)_ignoreTriggersForDeviceProfile:(unsigned long long)a0 denyListItem:(id)a1;
- (BOOL)_meetsThresholds:(unsigned long long)a0 count:(unsigned int)a1 forSSIDThresholds:(BOOL)a2 BSSID:(id)a3 SSID:(id)a4;
- (void)_printDenyList;
- (void)_setDenyListState:(id)a0 state:(unsigned long long)a1 reason:(unsigned long long)a2 reasonData:(long long)a3;
- (id)denyList;
- (id)denyListItemForScanResult:(id)a0;
- (long long)denyListThresholdForReason:(unsigned long long)a0 forSSIDThresholds:(BOOL)a1;
- (unsigned long long)denyListedNetworkCount;
- (id)denyListedNetworkSSIDs:(unsigned long long)a0;
- (id)denyListedReasonHistoryForNetwork:(id)a0 state:(unsigned long long)a1 timestamps:(id)a2 reasonData:(id)a3;
- (id)initWithDenyListDeviceProfile:(unsigned long long)a0;
- (BOOL)isNetworkDenyListedForAutoJoinDueToTrigDisc:(id)a0 RSSI:(long long *)a1 timestamp:(double *)a2;
- (BOOL)isNetworkInDenyListedState:(unsigned long long)a0 scanResult:(id)a1;
- (BOOL)isNetworkTemporarilyDenyListedForAutoJoin:(id)a0;
- (id)networksInDenyListedState:(unsigned long long)a0;
- (id)networksInDenyListedStateHistory:(unsigned long long)a0;
- (void)removeAllDenyListEntriesWithNetworkName:(id)a0;
- (void)removeAllDenyListedItems;
- (void)removeDenyListStateWithDenyListRemoveReason:(unsigned long long)a0;
- (void)removeExpiredDenyListedState:(unsigned long long)a0;
- (void)removeNetworkDenyListInfoForTrigger:(unsigned long long)a0 forNetwork:(id)a1;
- (void)removeNetworkDenyListInfoWithReason:(unsigned long long)a0 forScanResult:(id)a1;
- (void)setDefaultDenyListThresholds;
- (void)setDenyListedStateExpiryIntervalInSec:(double)a0 state:(unsigned long long)a1;
- (void)setDenyListingThresholds:(unsigned long long)a0 value:(unsigned int)a1 forSSIDThresholds:(BOOL)a2;
- (void)setNetworkDenyListInfo:(id)a0 forScanResult:(id)a1;

@end

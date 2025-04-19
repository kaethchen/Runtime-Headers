@class NSPersistentContainer, NSManagedObjectContext;

@interface AnalyticsReader : NSObject

@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSManagedObjectContext *backgroundReadingMOC;

- (void).cxx_destruct;
- (id)moc;
- (id)copyGeoTagsForNetwork:(id)a0 location:(id)a1;
- (id)_copyNetworkUsageDictionaryWithMOC:(id)a0 moc:(id)a1;
- (id)apProfileForBssid:(id)a0 andSSID:(id)a1;
- (long long)autoLeaveRssiForBss:(id)a0 ssid:(id)a1;
- (id)copyAllStoredNetworkSsids;
- (id)copyAllStoredNetworkSsidsWithColocatedScopeId:(id)a0;
- (id)copyAllStoredNetworkSsidsWithTrait:(unsigned long long)a0;
- (id)copyColocatedScopeIdForSsid:(id)a0;
- (id)copyColocatedScopeTransitionInfo:(id)a0 bssid:(id)a1 minRssi:(int)a2 maxRssi:(int)a3 band:(unsigned int)a4;
- (id)copyLocationsForNetwork:(id)a0;
- (id)copyNetworkUsageDictionary:(id)a0;
- (id)copyNetworksAvailableAtLocationWithinDistanceInBand:(id)a0 distance:(double)a1 band:(unsigned int)a2;
- (id)copyPreferenceScoreDictionaryForNetwork:(id)a0;
- (id)copyScoreSortedNetworksAvailableAtLocationWithinDistance:(id)a0 distance:(double)a1 authComparator:(id /* block */)a2;
- (id)initWithPersistentContainer:(id)a0;
- (BOOL)isHistoricallyBadLinkQualityNetwork:(id)a0;
- (BOOL)isMovingNetwork:(id)a0;
- (BOOL)isNetworkWithinRangeOfLocation:(id)a0 range:(double)a1 location:(id)a2 count:(unsigned long long *)a3;
- (BOOL)isOmnipresentNetwork:(id)a0;
- (unsigned long long)manualLeaveCountForBss:(id)a0 ssid:(id)a1;
- (id)neighborChannelsForBSS:(id)a0 ssid:(id)a1;
- (id)neighborsForBSS:(id)a0 ssid:(id)a1;
- (BOOL)parsedBeaconInfoIsStored:(id)a0 ssid:(id)a1;
- (void)releaseBackgroundReadingMOC;
- (void)resetBackgroundReadingMOC;
- (long long)rssiRoamTriggerForBSS:(id)a0 ssid:(id)a1;

@end

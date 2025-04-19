@interface AFEventStore : NSObject

+ (id)sharedInstance;

- (BOOL)_filterAppleAudioEventsMoreThanADayOld:(id)a0;
- (BOOL)_filterHeadUnitEventsMoreThanADayOld:(id)a0;
- (id)_getPublisher;
- (BOOL)_isEvent:(id)a0 olderThan:(long long)a1;
- (id)_mapIDsToProduct:(id)a0;
- (id)_mapIDsToSELFEvents:(id)a0;
- (void)_populateBTCarEventOUID:(id)a0 carBluetoothHeadunit:(id)a1;
- (void)deleteAllBTEventsWithQueue:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)deleteAllSiriServiceEventsWithQueue:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)fetchAppleAudioDeviceConnectedInLast24HoursWithCompletionHandler:(id /* block */)a0;
- (void)fetchEventsBetweenStartDate:(id)a0 endDate:(id)a1 withQueue:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)fetchHeadunitsConnectedInLast24HoursWithCompletionHandler:(id /* block */)a0;
- (void)storeBTEvent:(id)a0 withQueue:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)storeSiriServiceEvent:(id)a0 withQueue:(id)a1 atTime:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)storeSiriServiceEvent:(id)a0 withQueue:(id)a1 withCompletionHandler:(id /* block */)a2;

@end

@class GEOMapItemStorage, NSString, PPConnectionsCriteria, MapsSuggestionsContacts, NSArray, NSNumber, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsPortraitConnector, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsPortrait : NSObject <MapsSuggestionsObject> {
    id<MapsSuggestionsPortraitConnector> _connector;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    PPConnectionsCriteria *_criteria;
    NSString *_cachedKey;
    GEOMapItemStorage *_cachedMapItem;
    NSNumber *_cachedMapItemOrigin;
    MapsSuggestionsContacts *_contacts;
    NSArray *_currentTrips;
    NSArray *_futureTrips;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)currentTripsWithHandler:(id /* block */)a0;
- (BOOL)fetchConnectionEntriesWithHandler:(id /* block */)a0;
- (BOOL)fetchLocationEntriesForTray:(BOOL)a0 currentLocation:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
- (id)fetchNamedEntitiesFromDate:(id)a0;
- (BOOL)futureTripsWithHandler:(id /* block */)a0;
- (id)initFromResourceDepot:(id)a0;
- (id)initWithPortraitConnector:(id)a0 networkRequester:(id)a1 contacts:(id)a2;
- (void)sendFeedbackforClientID:(id)a0 storeType:(long long)a1 explicitlyEngagedStrings:(id)a2 explicitlyRejectedStrings:(id)a3 implicitlyEngagedStrings:(id)a4 implicitlyRejectedStrings:(id)a5;

@end

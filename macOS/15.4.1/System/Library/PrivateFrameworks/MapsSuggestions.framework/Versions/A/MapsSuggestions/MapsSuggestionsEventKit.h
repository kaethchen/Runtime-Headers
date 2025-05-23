@class NSString, MapsSuggestionsCanKicker, NSSet, NSMutableDictionary, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsNetworkRequester, MapsSuggestionsEventKitConnector;

@interface MapsSuggestionsEventKit : NSObject <MapsSuggestionsEventKitConnectorDelegate, MapsSuggestionsObject> {
    NSObject<OS_dispatch_queue> *_queue;
    id<MapsSuggestionsEventKitConnector> _connector;
    id<MapsSuggestionsNetworkRequester> _network;
    MapsSuggestionsObservers *_observers;
    MapsSuggestionsCanKicker *_changedNotificationCanKicker;
    NSSet *_setOfEventReservationSubtypes;
    NSMutableDictionary *_handleToMapItemMapping;
    NSMutableDictionary *_handleToMapItemOriginMapping;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (BOOL)deleteOrDeclineEntry:(id)a0 handler:(id /* block */)a1;
- (BOOL)entriesForEventsAtLocation:(id)a0 period:(id)a1 fetchMapItems:(BOOL)a2 handler:(id /* block */)a3;
- (void)eventKitDidChange:(id)a0;
- (BOOL)hasVisibleCalendars;
- (id)initFromResourceDepot:(id)a0;
- (id)initWithConnector:(id)a0 network:(id)a1;
- (void)interestingFlightEventsFrom:(id)a0 to:(id)a1 handler:(id /* block */)a2;

@end

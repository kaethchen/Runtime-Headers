@class NSString, NSXPCConnection, NSObject;
@protocol MapsSuggestionsInsightsUpdates, OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsRealInsights : NSObject <MapsSuggestionsSignalPipelineUpdateProxy, MapsSuggestionsInsights> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsInsightsUpdates> insightUpdatesDelegate;
@property (readonly, nonatomic) NSString *uniqueName;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)preload;
- (id)confidenceScoresForContacts:(id)a0 addresses:(id)a1;
- (id)confidenceScoresForMapItems:(id)a0;
- (id)initFromResourceDepot:(id)a0;
- (double)isTouristHere;
- (BOOL)isTransitUser;
- (BOOL)isTransitUserHere;
- (id)signalPackForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (char)signalPackForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (id)signalPackForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (char)signalPackForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (id)signalPackForHere;
- (char)signalPackForHereWithHandler:(id /* block */)a0;
- (void)signalPackUpdated:(id)a0;
- (BOOL)userHasAPaymentCard;
- (BOOL)userHasATransitCard;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)userHasAnUpcomingTrip;
- (BOOL)userIsCurrentlyInATrip;

@end

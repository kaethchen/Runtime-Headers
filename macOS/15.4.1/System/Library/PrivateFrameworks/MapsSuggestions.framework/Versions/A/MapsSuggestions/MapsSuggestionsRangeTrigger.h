@class MapsSuggestionsQueue, NSString, MapsSuggestionsCanKicker, CLLocation;
@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsRangeTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsLocationUpdaterDelegate> {
    CLLocation *_destinationLocation;
    double _radius;
    BOOL _onEnter;
    double _forceUpdateTime;
    id<MapsSuggestionsLocationUpdater> _locationUpdater;
    id<MapsSuggestionsLocationUpdater> _forcingLocationUpdater;
    MapsSuggestionsCanKicker *_locationForceUpdate;
    MapsSuggestionsQueue *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stop;
- (void)didAddFirstObserver;
- (void)didLoseLocationPermission;
- (void)didRemoveLastObserver;
- (void)didUpdateLocation:(id)a0;
- (id)initWithLocation:(id)a0 radius:(double)a1 onEnter:(BOOL)a2 minUpdateTime:(double)a3 locationUpdater:(id)a4 forcingLocationUpdater:(id)a5;
- (BOOL)withinRange:(id)a0;

@end

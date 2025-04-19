@class MapsSuggestionsManager, NSString, GEOAutomobileOptions, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsResourceDepot;

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject, MapsSuggestionsResourceDepot> {
    id<MapsSuggestionsResourceDepot> _resourceDepot;
    MapsSuggestionsManager *_entryManager;
    NSObject<OS_dispatch_queue> *_optionsSerialQueue;
}

@property (nonatomic) int mapType;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)manager;
- (id)strategy;
- (void)removeAdditionalFilter:(id)a0 forSink:(id)a1;
- (id)oneUser;
- (void)addAdditionalFilter:(id)a0 forSink:(id)a1;
- (void)attachSink:(id)a0;
- (void)detachSink:(id)a0;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (void)hintRefreshOfType:(long long)a0;
- (id)initWithEntryManager:(id)a0 resourceDepot:(id)a1;
- (BOOL)loadStorageFromFile:(id)a0;
- (BOOL)loadStorageFromFile:(id)a0 callback:(id /* block */)a1 callbackQueue:(id)a2;
- (id)oneAppGuardian;
- (id)oneBiome;
- (id)oneContactActivity;
- (id)oneContacts;
- (id)oneEventKit;
- (id)oneFavorites;
- (id)oneFinanceKit;
- (id)oneFindMy;
- (id)oneFlightUpdater;
- (id)oneInsights;
- (id)oneMapsSync;
- (id)oneNetworkRequester;
- (id)onePortrait;
- (id)oneRoutine;
- (BOOL)oneShotTopSuggestionsForSink:(id)a0 count:(unsigned long long)a1 transportType:(int)a2 callback:(id /* block */)a3 onQueue:(id)a4;
- (id)oneSourceDelegate;
- (id)oneVirtualGarage;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (BOOL)saveStorageToFile:(id)a0 callback:(id /* block */)a1;
- (id)topSuggestionsForSink:(id)a0 count:(unsigned long long)a1 transportType:(int)a2;
- (BOOL)topSuggestionsForSink:(id)a0 count:(unsigned long long)a1 transportType:(int)a2 callback:(id /* block */)a3 onQueue:(id)a4;
- (id)topSuggestionsFromStorageFile:(id)a0 sink:(id)a1 count:(unsigned long long)a2 transportType:(int)a3;
- (BOOL)topSuggestionsFromStorageFile:(id)a0 sink:(id)a1 count:(unsigned long long)a2 transportType:(int)a3 callback:(id /* block */)a4 onQueue:(id)a5;

@end

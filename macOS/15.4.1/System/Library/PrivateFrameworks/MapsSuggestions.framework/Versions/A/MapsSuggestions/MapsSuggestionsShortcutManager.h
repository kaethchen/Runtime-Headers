@class NSString, NSArray, MapsSuggestionsMeCard, MapsSuggestionsRoutine, NSMutableArray, NSObject, MapsSuggestionsMapsSync, MapsSuggestionsContacts, MapsSuggestionsObservers;
@protocol OS_dispatch_queue, MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor;

@interface MapsSuggestionsShortcutManager : NSObject <MapsSuggestionsMeCardObserver, MapsSuggestionsMapsSyncObserver, MapsSuggestionsMeCardReader> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    id<MapsSuggestionsShortcutStorage> _storage;
    id<MapsSuggestionsShortcutSuggestor> _suggestor;
    MapsSuggestionsRoutine *_routine;
    MapsSuggestionsContacts *_contacts;
    MapsSuggestionsMapsSync *_mapsSync;
    NSMutableArray *_hiddenShortcuts;
    BOOL _usingMyPlaces;
    MapsSuggestionsMeCard *_rawMeCard;
    MapsSuggestionsObservers *_meCardObservers;
    MapsSuggestionsMeCard *_currCorrectedMeCard;
    NSArray *_rawHomeAddressStrings;
    NSArray *_rawWorkAddressStrings;
    NSArray *_rawSchoolAddressStrings;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)storage;
- (id)routine;
- (char)addOrUpdateShortcuts:(id)a0 handler:(id /* block */)a1;
- (id)initFromResourceDepot:(id)a0;
- (id)initWithStorage:(id)a0 suggestor:(id)a1 contacts:(id)a2 routine:(id)a3 mapsSync:(id)a4 usingMyPlaces:(BOOL)a5;
- (char)loadAllShortcutsWithHandler:(id /* block */)a0;
- (void)mapsSync:(id)a0 didChangeForContentType:(long long)a1;
- (void)meCardReader:(id)a0 didUpdateMeCard:(id)a1;
- (char)moveShortcut:(id)a0 afterShortcut:(id)a1 handler:(id /* block */)a2;
- (char)moveShortcut:(id)a0 beforeShortcut:(id)a1 handler:(id /* block */)a2;
- (char)moveShortcut:(id)a0 toIndex:(long long)a1 withSnapshot:(id)a2 handler:(id /* block */)a3;
- (char)moveShortcutToBack:(id)a0 handler:(id /* block */)a1;
- (char)moveShortcutToFront:(id)a0 handler:(id /* block */)a1;
- (char)proposeAdditionalShortcutsOfType:(long long)a0 handler:(id /* block */)a1;
- (char)readMeCardWithHandler:(id /* block */)a0;
- (void)registerMeCardObserver:(id)a0;
- (char)removeShortcuts:(id)a0 handler:(id /* block */)a1;
- (id)suggestor;
- (id)test_setUpPlaceholdersIfNeeded:(id)a0 overlays:(id)a1;
- (void)test_sortMapsSuggestionsShortcuts:(id)a0;
- (void)unregisterMeCardObserver:(id)a0;

@end

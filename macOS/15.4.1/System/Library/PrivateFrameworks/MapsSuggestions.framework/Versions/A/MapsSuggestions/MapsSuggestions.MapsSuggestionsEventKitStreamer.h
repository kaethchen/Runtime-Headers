@interface MapsSuggestions.MapsSuggestionsEventKitStreamer : MapsSuggestions.MapsSuggestionsEventStreamer {
    void /* unknown type, empty encoding */ _eventKit;
    void /* unknown type, empty encoding */ _keyListenerBlock;
    void /* unknown type, empty encoding */ _resourceDepot;
    void /* unknown type, empty encoding */ _eventKitObserver;
    void /* unknown type, empty encoding */ _eventKitChangedCanKicker;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setupEventKit;
- (void)_tearDownEventKit;
- (id)initWithLookAheadPeriod:(double)a0 pingInterval:(double)a1 notificationName:(id)a2 identifyingName:(id)a3;
- (id)initWithResourceDepot:(id)a0 notificationName:(id)a1;
- (void)scanForStreamableEvents;

@end

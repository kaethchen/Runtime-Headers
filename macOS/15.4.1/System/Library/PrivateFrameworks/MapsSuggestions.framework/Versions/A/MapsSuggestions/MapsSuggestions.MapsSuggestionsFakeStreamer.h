@interface MapsSuggestions.MapsSuggestionsFakeStreamer : MapsSuggestions.MapsSuggestionsEventStreamer {
    void /* unknown type, empty encoding */ callBackBlock;
}

@property (nonatomic, copy) id /* block */ callBackBlock;
@property (nonatomic) void /* unknown type, empty encoding */ simpleCallBack;
@property (nonatomic) void /* unknown type, empty encoding */ tenSecondEvent;
@property (nonatomic) void /* unknown type, empty encoding */ alreadyStartedEvent;
@property (nonatomic) void /* unknown type, empty encoding */ doubleEvent;

- (void).cxx_destruct;
- (id)initWithLookAheadPeriod:(double)a0 pingInterval:(double)a1 notificationName:(id)a2 callBackBlock:(id /* block */)a3 simpleCallBack:(BOOL)a4 tenSecondEvent:(BOOL)a5 alreadyStartedEvent:(BOOL)a6 doubleEvent:(BOOL)a7;
- (id)initWithLookAheadPeriod:(double)a0 pingInterval:(double)a1 notificationName:(id)a2 identifyingName:(id)a3;
- (void)scanForStreamableEvents;

@end

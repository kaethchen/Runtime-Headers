@class NSString;

@interface MapsSuggestions.MapsSuggestionsFinanceKit : NSObject {
    void /* unknown type, empty encoding */ uniqueName;
    void /* unknown type, empty encoding */ _connector;
    void /* unknown type, empty encoding */ _observer;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _timeWindow;
    void /* unknown type, empty encoding */ _requester;
    void /* unknown type, empty encoding */ _queue;
}

@property (nonatomic, copy) NSString *uniqueName;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canProduceEntriesOfTypeWithType:(long long)a0;
- (char)deleteOrDeclineEntryWithEntry:(id)a0 handler:(id /* block */)a1;
- (id)initFromResourceDepot:(id)a0;
- (id)initWithConnector:(id)a0 requester:(id)a1;
- (void)startObservingForOrdersWithPeriod:(double)a0;
- (void)stopObservingForOrders;
- (void)updateOrdersWithOrders:(id)a0;

@end

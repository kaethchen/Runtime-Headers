@interface MapsSuggestions.MapsSuggestionsRealFinanceKitConnector : NSObject <MapsSuggestions.MapsSuggestionsFinanceKitConnector>

- (id)init;
- (id)currentOrderPickupsWithPeriod:(double)a0;
- (id)startObservingOrderPickupsIn:(double)a0 callback:(id /* block */)a1;

@end

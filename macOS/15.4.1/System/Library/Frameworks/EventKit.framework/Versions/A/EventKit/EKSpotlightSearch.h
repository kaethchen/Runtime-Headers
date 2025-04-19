@class CSSearchQuery, EKEventStore;

@interface EKSpotlightSearch : NSObject {
    CSSearchQuery *csQuery;
}

@property (weak) EKEventStore *eventStore;

+ (id)queryStringForSearchTerm:(id)a0 matchingTypes:(unsigned long long)a1 fromStartDate:(id)a2 toEndDate:(id)a3;
+ (id)_queryStringForPeopleMatchingSearchTerm:(id)a0;
+ (id)queryStringForSearchTerm:(id)a0 matchingTypes:(unsigned long long)a1;
+ (id)searchWithCSQuery:(id)a0 inStore:(id)a1 inCalendars:(id)a2 resultHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;

- (void).cxx_destruct;
- (id)query;
- (void)start;
- (void)cancel;
- (id)initWithSearchWithCSQuery:(id)a0 inStore:(id)a1 inCalendars:(id)a2 resultHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)setCachedNextOccurrenceDateOnRepeatingRemindersInEvents:(id)a0 withDateMap:(id)a1;

@end

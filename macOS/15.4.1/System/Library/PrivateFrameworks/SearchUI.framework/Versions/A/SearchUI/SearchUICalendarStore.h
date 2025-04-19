@interface SearchUICalendarStore : NSObject

+ (id)colorForDefaultCalendarForNewEvents;
+ (void)fetchCalendarItemFromEventIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)sharedCalendarStore;

@end

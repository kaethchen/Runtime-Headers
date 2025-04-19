@interface MFEWSEventFetcher : NSObject

+ (id)fetchEventsWithConnection:(id)a0 forMeetingRequestItemIdStrings:(id)a1 error:(id *)a2;
+ (id)fetchEventsWithConnection:(id)a0 forMeetingCancellationItemIdStrings:(id)a1 error:(id *)a2;

@end

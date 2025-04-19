@class NSString, NSDate;

@interface MFLibraryCalendarEvent : NSObject

@property (copy) NSString *originalReceivedAccountURLString;
@property (copy) NSString *associatedCalendarItemIdString;
@property (copy) NSString *location;
@property (copy) NSString *uid;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property BOOL isAllDayEvent;
@property BOOL isOutOfDate;
@property BOOL hasBeenProcessed;
@property BOOL isResponseRequested;
@property long long responseStatus;

- (void).cxx_destruct;

@end

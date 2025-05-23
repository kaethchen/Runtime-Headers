@class EWSCalendarEventDetails, NSDateComponents, NSString;

@interface EWSCalendarEvent : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) NSDateComponents *StartTime;
@property (retain, nonatomic) NSDateComponents *EndTime;
@property (nonatomic) long long BusyType;
@property (retain, nonatomic) EWSCalendarEventDetails *CalendarEventDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end

@class NSString, NSDictionary, NSURL, NSDate, EKStructuredLocation;

@interface CALNTriggeredEventNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) BOOL isTimeSensitive;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, copy, nonatomic) NSString *eventOccurrenceID;
@property (readonly, copy, nonatomic) NSString *eventObjectID;
@property (readonly, copy, nonatomic) NSString *calendarIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary;
@property (readonly, copy, nonatomic) NSString *legacyIdentifier;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation;
@property (readonly, copy, nonatomic) NSURL *conferenceURL;
@property (readonly, nonatomic) BOOL conferenceURLIsBroadcast;
@property (readonly, copy, nonatomic) NSURL *mailtoURL;
@property (readonly, nonatomic) BOOL hasSuggestedLocation;
@property (readonly, nonatomic) BOOL eventHasAlarms;
@property (readonly, nonatomic) BOOL allowsLocationAlerts;
@property (readonly, nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;
@property (readonly, nonatomic) BOOL travelAdvisoryDisabled;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 location:(id)a1 locationWithoutPrediction:(id)a2 startDate:(id)a3 endDate:(id)a4 isAllDay:(BOOL)a5 isTimeSensitive:(BOOL)a6 eventID:(id)a7 eventOccurrenceID:(id)a8 eventObjectID:(id)a9 calendarIdentifier:(id)a10 eventRepresentationDictionary:(id)a11 legacyIdentifier:(id)a12 preferredLocation:(id)a13 conferenceURL:(id)a14 conferenceURLIsBroadcast:(BOOL)a15 mailtoURL:(id)a16 hasSuggestedLocation:(BOOL)a17 eventHasAlarms:(BOOL)a18 allowsLocationAlerts:(BOOL)a19 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)a20 travelAdvisoryDisabled:(BOOL)a21;

@end

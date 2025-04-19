@class EWSSingleRecipientType, NSString, EWSOccurrenceInfoType, NSArray, EWSRecurrenceType, EWSTimeZoneType, NSDateComponents, EWSTimeZoneDefinitionType;

@interface EWSMeetingRequestMessageType : EWSMeetingMessageType

@property (nonatomic) long long MeetingRequestType;
@property (nonatomic) long long IntendedFreeBusyStatus;
@property (retain, nonatomic) NSDateComponents *Start;
@property (retain, nonatomic) NSDateComponents *End;
@property (retain, nonatomic) NSDateComponents *OriginalStart;
@property (nonatomic) BOOL IsAllDayEvent;
@property (nonatomic) long long LegacyFreeBusyStatus;
@property (copy, nonatomic) NSString *Location;
@property (copy, nonatomic) NSString *When;
@property (nonatomic) BOOL IsMeeting;
@property (nonatomic) BOOL IsCancelled;
@property (nonatomic) BOOL IsRecurring;
@property (nonatomic) BOOL MeetingRequestWasSent;
@property (nonatomic) long long CalendarItemType;
@property (nonatomic) long long MyResponseType;
@property (retain, nonatomic) EWSSingleRecipientType *Organizer;
@property (copy, nonatomic) NSArray *RequiredAttendees;
@property (copy, nonatomic) NSArray *OptionalAttendees;
@property (copy, nonatomic) NSArray *Resources;
@property (nonatomic) long long ConflictingMeetingCount;
@property (nonatomic) long long AdjacentMeetingCount;
@property (copy, nonatomic) NSArray *ConflictingMeetings;
@property (copy, nonatomic) NSArray *AdjacentMeetings;
@property (copy, nonatomic) NSString *Duration;
@property (copy, nonatomic) NSString *TimeZone;
@property (retain, nonatomic) NSDateComponents *AppointmentReplyTime;
@property (nonatomic) long long AppointmentSequenceNumber;
@property (nonatomic) long long AppointmentState;
@property (retain, nonatomic) EWSRecurrenceType *Recurrence;
@property (retain, nonatomic) EWSOccurrenceInfoType *FirstOccurrence;
@property (retain, nonatomic) EWSOccurrenceInfoType *LastOccurrence;
@property (copy, nonatomic) NSArray *ModifiedOccurrences;
@property (copy, nonatomic) NSArray *DeletedOccurrences;
@property (retain, nonatomic) EWSTimeZoneType *MeetingTimeZone;
@property (nonatomic) long long ConferenceType;
@property (nonatomic) BOOL AllowNewTimeProposal;
@property (nonatomic) BOOL IsOnlineMeeting;
@property (copy, nonatomic) NSString *MeetingWorkspaceUrl;
@property (copy, nonatomic) NSString *NetShowUrl;
@property (copy, nonatomic) EWSTimeZoneDefinitionType *StartTimeZone;
@property (copy, nonatomic) EWSTimeZoneDefinitionType *EndTimeZone;

+ (id)definition;

- (void).cxx_destruct;

@end

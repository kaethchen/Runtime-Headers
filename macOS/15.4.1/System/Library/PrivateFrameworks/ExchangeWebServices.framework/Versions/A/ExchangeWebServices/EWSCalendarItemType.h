@class EWSSingleRecipientType, NSString, EWSOccurrenceInfoType, NSArray, EWSRecurrenceType, EWSTimeZoneType, NSDateComponents, EWSTimeZoneDefinitionType;

@interface EWSCalendarItemType : EWSItemType

@property (copy, nonatomic) NSString *UID;
@property (retain, nonatomic) NSDateComponents *RecurrenceId;
@property (retain, nonatomic) NSDateComponents *DateTimeStamp;
@property (retain, nonatomic) NSDateComponents *Start;
@property (retain, nonatomic) NSDateComponents *End;
@property (retain, nonatomic) NSDateComponents *OriginalStart;
@property (nonatomic) BOOL IsAllDayEvent;
@property (nonatomic) BOOL IsAllDayEventSpecified;
@property (nonatomic) long long LegacyFreeBusyStatus;
@property (copy, nonatomic) NSString *Location;
@property (copy, nonatomic) NSString *When;
@property (nonatomic) BOOL IsMeeting;
@property (nonatomic) BOOL IsMeetingSpecified;
@property (nonatomic) BOOL IsCancelled;
@property (nonatomic) BOOL IsCancelledSpecified;
@property (nonatomic) BOOL IsRecurring;
@property (nonatomic) BOOL IsRecurringSpecified;
@property (nonatomic) BOOL MeetingRequestWasSent;
@property (nonatomic) BOOL MeetingRequestWasSentSpecified;
@property (nonatomic) BOOL IsResponseRequested;
@property (nonatomic) BOOL IsResponseRequestedSpecified;
@property (nonatomic) long long CalendarItemType;
@property (nonatomic) long long MyResponseType;
@property (retain, nonatomic) EWSSingleRecipientType *Organizer;
@property (copy, nonatomic) NSArray *RequiredAttendees;
@property (copy, nonatomic) NSArray *OptionalAttendees;
@property (copy, nonatomic) NSArray *Resources;
@property (nonatomic) long long ConflictingMeetingCount;
@property (nonatomic) BOOL ConflictingMeetingCountSpecified;
@property (nonatomic) long long AdjacentMeetingCount;
@property (nonatomic) BOOL AdjacentMeetingCountSpecified;
@property (copy, nonatomic) NSArray *ConflictingMeetings;
@property (copy, nonatomic) NSArray *AdjacentMeetings;
@property (copy, nonatomic) NSString *Duration;
@property (copy, nonatomic) NSString *TimeZone;
@property (retain, nonatomic) NSDateComponents *AppointmentReplyTime;
@property (nonatomic) long long AppointmentSequenceNumber;
@property (nonatomic) BOOL AppointmentSequenceNumberSpecified;
@property (nonatomic) long long AppointmentState;
@property (nonatomic) BOOL AppointmentStateSpecified;
@property (retain, nonatomic) EWSRecurrenceType *Recurrence;
@property (retain, nonatomic) EWSOccurrenceInfoType *FirstOccurrence;
@property (retain, nonatomic) EWSOccurrenceInfoType *LastOccurrence;
@property (copy, nonatomic) NSArray *ModifiedOccurrences;
@property (copy, nonatomic) NSArray *DeletedOccurrences;
@property (retain, nonatomic) EWSTimeZoneType *MeetingTimeZone;
@property (nonatomic) long long ConferenceType;
@property (nonatomic) BOOL ConferenceTypeSpecified;
@property (nonatomic) BOOL AllowNewTimeProposal;
@property (nonatomic) BOOL AllowNewTimeProposalSpecified;
@property (nonatomic) BOOL IsOnlineMeeting;
@property (nonatomic) BOOL IsOnlineMeetingSpecified;
@property (copy, nonatomic) NSString *MeetingWorkspaceUrl;
@property (copy, nonatomic) NSString *NetShowUrl;
@property (nonatomic) BOOL IsAssociated;
@property (nonatomic) BOOL IsAssociatedSpecified;
@property (retain, nonatomic) EWSTimeZoneDefinitionType *StartTimeZone;
@property (retain, nonatomic) EWSTimeZoneDefinitionType *EndTimeZone;

+ (id)definition;

- (void).cxx_destruct;

@end

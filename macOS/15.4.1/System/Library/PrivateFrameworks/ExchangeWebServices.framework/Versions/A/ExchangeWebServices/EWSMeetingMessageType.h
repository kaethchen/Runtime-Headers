@class NSString, NSDateComponents, EWSItemIdType;

@interface EWSMeetingMessageType : EWSMessageType

@property (retain, nonatomic) EWSItemIdType *AssociatedCalendarItemId;
@property (nonatomic) BOOL IsDelegated;
@property (nonatomic) BOOL IsOutOfDate;
@property (nonatomic) BOOL HasBeenProcessed;
@property (nonatomic) long long ResponseType;
@property (copy, nonatomic) NSString *UID;
@property (retain, nonatomic) NSDateComponents *RecurrenceId;
@property (retain, nonatomic) NSDateComponents *DateTimeStamp;
@property (retain, nonatomic) NSDateComponents *ProposedStart;
@property (retain, nonatomic) NSDateComponents *ProposedEnd;

+ (id)definition;

- (void).cxx_destruct;

@end

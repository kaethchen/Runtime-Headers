@class NSArray, EWSFreeBusyViewOptionsType, EWSSerializableTimeZone;

@interface EWSGetUserAvailabilityRequestType : EWSBaseRequestType

@property (retain, nonatomic) EWSSerializableTimeZone *TimeZone;
@property (copy, nonatomic) NSArray *MailboxDataArray;
@property (retain, nonatomic) EWSFreeBusyViewOptionsType *FreeBusyViewOptions;

+ (id)definition;

- (void).cxx_destruct;

@end

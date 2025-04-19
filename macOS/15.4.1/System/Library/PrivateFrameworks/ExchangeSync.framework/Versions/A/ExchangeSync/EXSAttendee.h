@class EXSEmailAddress, NSDateComponents;

@interface EXSAttendee : NSObject

@property (retain, nonatomic) EXSEmailAddress *attendeeMailbox;
@property (nonatomic) long long responseType;
@property (nonatomic) long long changeType;
@property (retain, nonatomic) NSDateComponents *lastResponseTime;
@property (retain, nonatomic) NSDateComponents *proposedStart;
@property (retain, nonatomic) NSDateComponents *proposedEnd;

+ (id)initWithAttendeeInformation:(id)a0 currentResponse:(long long)a1 lastResponseTime:(id)a2 forProposedStart:(id)a3 forProposedEnd:(id)a4;
+ (id)initWithPropertiesDictionary:(id)a0;

- (void).cxx_destruct;
- (id)deriveJSONrepresentation;

@end

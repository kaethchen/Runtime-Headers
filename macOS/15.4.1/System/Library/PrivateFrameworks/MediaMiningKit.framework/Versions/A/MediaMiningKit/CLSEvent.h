@class NSString, NSArray, NSDate, CLLocation;

@interface CLSEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) NSArray *performers;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic, getter=hasMeetingRoom) BOOL meetingRoom;
@property (nonatomic, getter=isOrganizedByMe) BOOL organizedByMe;
@property (nonatomic, getter=isAccepted) BOOL accepted;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

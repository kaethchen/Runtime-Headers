@class NSURL, EKParticipant, NSString;

@interface CalAttendee : NSObject <NSCopying>

@property (retain, nonatomic) EKParticipant *ekParticipant;
@property (readonly) NSURL *address;
@property (readonly) NSString *commonName;
@property (readonly) NSString *status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEKParticipant:(id)a0;

@end

@class NSData, NSURL, NSString;

@interface _BlastDoorCKDeviceToDeviceShareInvitationToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *sharingInvitationData;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *participantID;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSharingInvitationData:(id)a0 shareURL:(id)a1;
- (id)initWithSharingInvitationData:(id)a0 shareURL:(id)a1 participantID:(id)a2;

@end

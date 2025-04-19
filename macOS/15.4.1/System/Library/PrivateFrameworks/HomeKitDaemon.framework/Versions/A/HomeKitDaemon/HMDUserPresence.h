@class HMDUserPresenceRegion, HMDUser, NSString, NSDate, HMDUserPresenceUpdateReason, HMDDevice;

@interface HMDUserPresence : HMFObject <HMDUserPresence, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMDDevice *deviceWhichUpdatedUserPresence;
@property (retain, nonatomic) HMDUserPresenceRegion *presenceRegionStatus;
@property (retain, nonatomic) HMDUserPresenceRegion *rawPresenceRegionStatus;
@property (retain, nonatomic) HMDUserPresenceUpdateReason *presenceUpdateReason;
@property (readonly, nonatomic) NSDate *updateTimestamp;
@property (retain, nonatomic) NSDate *lastLocalActivityTimeStamp;
@property (retain, nonatomic) NSDate *lastLocalActivityUpdateTimeStampInWorkingStore;
@property (readonly, nonatomic) HMDUser *user;
@property (readonly, nonatomic, getter=isAtHome) BOOL atHome;
@property (readonly, nonatomic, getter=isNotAtHome) BOOL notAtHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)attributeDescriptions;
- (id)initWithUser:(id)a0 presenceRegionStatus:(id)a1;
- (id)initWithUser:(id)a0 presenceRegionStatus:(id)a1 timeStamp:(id)a2;
- (id)initWithUser:(id)a0 presenceRegionStatus:(id)a1 timeStamp:(id)a2 presenceUpdateReason:(id)a3 device:(id)a4;

@end

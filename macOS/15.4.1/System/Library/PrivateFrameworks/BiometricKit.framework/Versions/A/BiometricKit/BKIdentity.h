@class NSUUID, NSString, BKAccessory, NSDate, BKDevice, BKAccessoryGroup;

@interface BKIdentity : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int userID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) BKDevice *device;
@property (retain, nonatomic) BKAccessory *accessory;
@property (retain, nonatomic) BKAccessoryGroup *accessoryGroup;
@property (nonatomic) BOOL placeholderIdentity;
@property (nonatomic) BOOL hasPeriocularEnrollment;
@property (nonatomic) BOOL hasPeriocularEnrollmentWithGlasses;
@property (nonatomic) BOOL canAddPeriocularEnrollment;
@property (nonatomic) long long secondaryPeriocularEnrollments;

+ (id)identity;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToIdentity:(id)a0;
- (id)initWithServerIdentity:(id)a0 device:(id)a1;
- (id)serverIdentity;

@end

@class NSSet, HMRestrictedGuestHomeAccessSchedule;

@interface HMMutableRestrictedGuestHomeAccessSettings : HMRestrictedGuestHomeAccessSettings

@property (copy) NSSet *accessAllowedToAccessories;
@property (copy) HMRestrictedGuestHomeAccessSchedule *guestAccessSchedule;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

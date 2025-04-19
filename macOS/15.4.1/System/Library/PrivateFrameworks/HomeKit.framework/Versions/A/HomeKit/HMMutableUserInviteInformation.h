@class NSString, HMRestrictedGuestHomeAccessSettings;

@interface HMMutableUserInviteInformation : HMUserInviteInformation

@property (copy) HMRestrictedGuestHomeAccessSettings *restrictedGuestHomeAccessSettings;
@property (copy) NSString *userID;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

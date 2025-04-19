@class NSString, NSArray, HMRestrictedGuestHomeAccessSettings;

@interface HMUserInviteInformation : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *userID;
@property (copy) HMRestrictedGuestHomeAccessSettings *restrictedGuestHomeAccessSettings;
@property (readonly, getter=isAdministrator) BOOL administrator;
@property (readonly, getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;
@property (readonly, nonatomic) unsigned long long camerasAccessLevel;
@property (readonly, getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed;
@property (readonly, getter=isRestrictedGuest) BOOL restrictedGuest;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_validateInviteInformationForHome:(id)a0;
- (id)initWithUser:(id)a0 administrator:(BOOL)a1 remoteAccess:(BOOL)a2;
- (id)initWithUser:(id)a0 administrator:(BOOL)a1 remoteAccess:(BOOL)a2 announceAccess:(BOOL)a3 camerasAccessLevel:(unsigned long long)a4;
- (id)initWithUser:(id)a0 administrator:(BOOL)a1 remoteAccess:(BOOL)a2 announceAccess:(BOOL)a3 camerasAccessLevel:(unsigned long long)a4 restrictedGuest:(BOOL)a5 restrictedGuestHomeAccessSettings:(id)a6;
- (BOOL)validateInviteForHome:(id)a0;

@end

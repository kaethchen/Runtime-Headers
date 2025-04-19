@class NSString, ADMLocalUser;

@interface ADMSystemProvisioningDecision : NSObject

@property (readonly, retain) NSString *password;
@property (readonly, retain) ADMLocalUser *user;
@property BOOL requirePasswordChange;

+ (id)systemProvisioningDecisionForUser:(id)a0 withNewPassword:(id)a1;

- (void)dealloc;
- (id)initWithUser:(id)a0 newPassword:(id)a1;

@end

@interface SSInvitationHelper : NSObject

+ (id)displayStringForCNContact:(id)a0;
+ (void)enumerateIDSIDsForCNContact:(id)a0 usingBlock:(id /* block */)a1;
+ (id)formattedIDSIDForAppleID:(id)a0;
+ (id)idsCopyIDForEmailAddress:(id)a0;
+ (id)idsCopyIDForPhoneNumber:(id)a0;
+ (id)idsIDsForCNContact:(id)a0;
+ (void)performScreenSharingInvitationWithABPersonID:(id)a0 inDirection:(long long)a1;
+ (id)screenSharingURLStringForABPersonID:(id)a0;
+ (id)screenSharingURLStringForAppleID:(id)a0;
+ (id)screenSharingURLStringForCNContact:(id)a0;

@end

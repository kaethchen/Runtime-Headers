@interface CalUIEKIdentityUtils : NSObject

+ (id)addressForIdentity:(id)a0;
+ (BOOL)canAddIdentity:(id)a0 toCalendar:(id)a1;
+ (BOOL)canAddIdentity:(id)a0 toEvent:(id)a1;
+ (BOOL)canAddIdentityFromContact:(id)a0 toEvent:(id)a1;
+ (id)displayAddressForIdentity:(id)a0;
+ (id)displayAddressUsingNameAsBackupForIdentity:(id)a0;
+ (id)displayNameForIdentity:(id)a0;
+ (id)displayNameUsingAddressAsBackupForIdentity:(id)a0;
+ (id)identityFromABString:(id)a0 isAttendee:(BOOL)a1;
+ (id)identityNameFromString:(id)a0;
+ (id)tokenFieldFormattedAddressForIdentity:(id)a0;

@end

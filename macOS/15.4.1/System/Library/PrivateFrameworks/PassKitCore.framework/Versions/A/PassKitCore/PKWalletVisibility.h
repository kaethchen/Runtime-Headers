@interface PKWalletVisibility : NSObject

+ (BOOL)isWalletVisible;
+ (BOOL)isWalletRestricted;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)updateWalletVisibility;

@end

@interface WLKBadgingUtilities : NSObject

+ (BOOL)hasMigrated;
+ (id)sharedUtilities;
+ (void)clearSavedBadgeIdentifiers;
+ (BOOL)addBadgeIdentifier:(id)a0;
+ (id)badgeIdentifiers;
+ (id)currentBadgeNumber;
+ (BOOL)removeBadgeIdentifier:(id)a0;

- (id)_notificationCenter;
- (void)migrateToNewBadgingSystemIfNeeded;

@end

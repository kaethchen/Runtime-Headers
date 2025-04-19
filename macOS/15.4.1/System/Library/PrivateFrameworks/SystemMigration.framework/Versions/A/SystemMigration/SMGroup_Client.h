@interface SMGroup_Client : SMGroup

+ (id)interestedDaemonKeys;
+ (id)interestedDaemonKeysLimitedToMigratableUsers;

- (id)initWithXpcDictionaryRepresentation:(id)a0;

@end

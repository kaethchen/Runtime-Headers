@interface SALauncher : NSObject

+ (void)exitBuddySession:(id /* block */)a0;
+ (void)getBuddyWindowRepresentation:(id /* block */)a0;
+ (void)startMigrationBuddySession:(id /* block */)a0;
+ (void)startMigrationBuddySessionWithAdditionalInformation:(id)a0 completionBlock:(id /* block */)a1;
+ (void)switchToBuddySession:(id /* block */)a0;

@end

@interface SUOSUMachineState : NSObject

+ (BOOL)displayIsAsleep;
+ (id)currentOSVersion;
+ (id)currentOSVersionTruncated;
+ (BOOL)currentUserLoggedIn;
+ (BOOL)currentUserOnConsole;
+ (BOOL)otherUsersAreLoggedIn;
+ (BOOL)prefPaneIsActive;
+ (BOOL)setupAssistantIsActive;
+ (BOOL)usersAreLoggedIn;

@end

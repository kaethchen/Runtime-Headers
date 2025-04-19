@interface ROSEnvironment : NSObject

+ (BOOL)automaticVoiceOverEnabled;
+ (BOOL)pairedRecovery;
+ (id)recoveryBootMode;
+ (BOOL)softwareUpdateEnvironment;
+ (BOOL)systemRecovery;

@end

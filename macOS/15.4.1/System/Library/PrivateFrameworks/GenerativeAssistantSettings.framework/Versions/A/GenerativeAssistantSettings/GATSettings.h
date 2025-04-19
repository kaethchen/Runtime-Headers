@interface GATSettings : NSObject

+ (BOOL)isEnabled;
+ (long long)accountType;
+ (BOOL)setupPrompt;
+ (BOOL)useConfirmationPrompts;

- (id)init;

@end

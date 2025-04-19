@interface ABApplicationServices : NSObject

+ (id)defaultApplicationServices;
+ (BOOL)isRunningInContactsApplication;
+ (id)newDefaultApplicationServices;

@end

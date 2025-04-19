@interface TRITaskSupport : NSObject <TRITaskSetProviding>

+ (id)sharedInstance;

- (id)XPCTaskAllowlist;
- (Class)taskClassForTaskType:(int)a0;

@end

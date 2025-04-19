@interface LUIDebugUserController : NSObject

+ (id)sharedManger;

- (id)users;
- (id)userWithGUID:(id)a0;
- (id)userWithName:(id)a0;
- (id)userWithUID:(unsigned int)a0;

@end

@interface HDAControllerInterface : HDAInterface

+ (int)getBuiltInControllerIndex;
+ (int)getControllerCount;

- (void)dealloc;
- (id)init:(BOOL)a0;

@end

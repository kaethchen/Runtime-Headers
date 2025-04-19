@interface IMKDecorator : NSObject

@property (readonly, nonatomic) id decoratedInstance;
@property (readonly, nonatomic) id coreInstance;

- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isSubclassOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (Class)superclass;
- (void).cxx_destruct;
- (id)initDecorating:(id)a0;

@end

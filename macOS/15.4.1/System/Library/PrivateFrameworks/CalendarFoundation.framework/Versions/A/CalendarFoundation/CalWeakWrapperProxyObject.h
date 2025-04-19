@interface CalWeakWrapperProxyObject : NSObject

@property (weak, nonatomic) id wrappedObject;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithWrappedObject:(id)a0;

@end

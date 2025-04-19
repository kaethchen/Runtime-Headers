@interface Receiver : NSObject

@property (weak, nonatomic) id wrappedObject;

- (void).cxx_destruct;
- (id)initWithWrappedObject:(id)a0;

@end

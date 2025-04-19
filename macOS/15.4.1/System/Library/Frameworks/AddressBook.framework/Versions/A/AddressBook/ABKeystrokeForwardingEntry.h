@interface ABKeystrokeForwardingEntry : NSObject

@property (readonly) id target;
@property (readonly) SEL action;
@property (readonly) id /* block */ test;

+ (id)entryWithTarget:(id)a0 action:(SEL)a1 test:(id /* block */)a2;

- (void).cxx_destruct;

@end

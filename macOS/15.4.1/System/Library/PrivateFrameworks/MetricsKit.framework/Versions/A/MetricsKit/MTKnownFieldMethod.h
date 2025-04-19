@interface MTKnownFieldMethod : NSObject

@property void /* function */ *imp;
@property SEL accessor;

- (id)initWithIMP:(void /* function */ *)a0 accessor:(SEL)a1;

@end

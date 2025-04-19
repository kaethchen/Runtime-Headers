@interface _NSAECoercerData : NSObject {
    id coercer;
    SEL selector;
}

- (void)dealloc;
- (id)initWithCoercer:(id)a0 selector:(SEL)a1;

@end

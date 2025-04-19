@interface _NSSelectorSetBinding : NSKeySetBinding {
    SEL setSel;
    void /* function */ *setMethod;
    void /* function */ *set;
}

- (id)initWithSetFunc:(void /* function */ *)a0 forImp:(void /* function */ *)a1 selector:(SEL)a2;
- (BOOL)isScalarProperty;
- (void)setValue:(id)a0 inObject:(id)a1;

@end

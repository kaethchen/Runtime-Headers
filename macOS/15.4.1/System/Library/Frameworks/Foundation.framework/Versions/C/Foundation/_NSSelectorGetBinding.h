@interface _NSSelectorGetBinding : NSKeyGetBinding {
    SEL getSel;
    void /* function */ *getMethod;
    void /* function */ *get;
}

- (id)getValueFromObject:(id)a0;
- (id)initWithFunc:(void /* function */ *)a0 forImp:(void /* function */ *)a1 selector:(SEL)a2;

@end

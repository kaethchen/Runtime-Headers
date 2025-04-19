@interface _NSKVCPIvarGetBinding : NSKeyGetBinding {
    long long offset;
    void /* function */ *get;
}

- (id)getValueFromObject:(id)a0;
- (id)initWithFunc:(void /* function */ *)a0 ivarOffset:(long long)a1;

@end

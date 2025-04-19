@interface _NSKeyForwardingGetBinding : NSKeyGetBinding {
    BOOL _isStored;
    char _padding[3];
}

- (id)getValueFromObject:(id)a0;
- (id)initWithKey:(id)a0 isStored:(BOOL)a1;

@end

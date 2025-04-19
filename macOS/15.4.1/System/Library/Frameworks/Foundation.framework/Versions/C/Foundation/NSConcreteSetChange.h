@interface NSConcreteSetChange : NSSetChange {
    unsigned long long _changeType;
    id _value;
}

- (void)dealloc;
- (id)value;
- (unsigned long long)changeType;
- (id)initWithType:(unsigned long long)a0 object:(id)a1;

@end

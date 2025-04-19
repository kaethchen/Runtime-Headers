@interface IMAVControl : NSObject {
    id _contents;
}

+ (Class)_auxiliaryClass;

- (id)init;
- (double)doubleValue;
- (float)floatValue;
- (int)intValue;
- (id)_identifier;
- (long long)integerValue;
- (void)setEnabled:(BOOL)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (void)setTag:(long long)a0;
- (BOOL)isEnabled;
- (void)setAction:(SEL)a0;
- (SEL)action;
- (void)setDoubleValue:(double)a0;
- (long long)tag;
- (void)setFloatValue:(float)a0;
- (void)setIntValue:(int)a0;
- (void)setIntegerValue:(long long)a0;
- (id)_initWithIdentifier:(id)a0;
- (id)_dictionaryRepresentation;
- (void)_setControlBar:(id)a0;
- (id)_controlBar;

@end

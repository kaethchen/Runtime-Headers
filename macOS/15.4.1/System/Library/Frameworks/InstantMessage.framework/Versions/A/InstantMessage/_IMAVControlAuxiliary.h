@interface _IMAVControlAuxiliary : NSObject

- (double)doubleValue;
- (float)floatValue;
- (int)intValue;
- (BOOL)enabled;
- (id)identifier;
- (long long)integerValue;
- (void)setEnabled:(BOOL)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (void)setTag:(long long)a0;
- (void)setAction:(SEL)a0;
- (void)setIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (SEL)action;
- (void)setDoubleValue:(double)a0;
- (long long)tag;
- (void)setFloatValue:(float)a0;
- (void)setIntValue:(int)a0;
- (void)setIntegerValue:(long long)a0;
- (void)_performControlDidChange;
- (id)controlBar;
- (id)initWithControl:(id)a0;
- (void)setControlBar:(id)a0;

@end

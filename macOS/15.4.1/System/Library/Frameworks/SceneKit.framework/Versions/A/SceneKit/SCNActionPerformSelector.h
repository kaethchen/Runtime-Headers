@interface SCNActionPerformSelector : SCNAction {
    SEL _selector;
    id _target;
}

+ (BOOL)supportsSecureCoding;
+ (id)performSelector:(SEL)a0 onTarget:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isCustom;
- (id)reversedAction;
- (void)updateWithTarget:(id)a0 forTime:(double)a1;

@end

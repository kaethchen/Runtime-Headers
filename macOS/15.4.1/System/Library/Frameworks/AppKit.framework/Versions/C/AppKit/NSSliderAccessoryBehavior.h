@interface NSSliderAccessoryBehavior : NSObject <NSCoding, NSCopying>

@property (class, readonly, copy) NSSliderAccessoryBehavior *automaticBehavior;
@property (class, readonly, copy) NSSliderAccessoryBehavior *valueStepBehavior;
@property (class, readonly, copy) NSSliderAccessoryBehavior *valueResetBehavior;

+ (id)behaviorWithHandler:(id /* block */)a0;
+ (id)behaviorWithTarget:(id)a0 action:(SEL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)repeatsOnLongPressForAccessory:(id)a0;
- (void)handleAction:(id)a0;

@end

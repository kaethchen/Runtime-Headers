@interface _NSBlockSliderAccessoryBehavior : NSSliderAccessoryBehavior

@property (readonly, copy) id /* block */ handler;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)handleAction:(id)a0;
- (id)initWithHandler:(id /* block */)a0;

@end

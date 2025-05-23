@interface RCPEventAction : NSObject <NSCoding, NSCopying>

+ (id)actionToSetPointerAbsoluteLocation:(struct CGPoint { double x0; double x1; })a0 environment:(id)a1;
+ (id)actionToSetPointerCurrentAbsoluteLocation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)play;

@end

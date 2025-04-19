@interface _NSSharedValueTransformer : NSValueTransformer

- (BOOL)_isDeallocating;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (BOOL)_isBooleanTransformer;

@end

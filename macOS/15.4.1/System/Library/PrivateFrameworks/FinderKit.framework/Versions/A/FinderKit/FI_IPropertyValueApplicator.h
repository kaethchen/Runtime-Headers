@interface FI_IPropertyValueApplicator : NSObject

+ (id)applicator;

- (BOOL)canModifyNodes:(const void *)a0;
- (int)applyValue:(id)a0 toNodes:(const void *)a1;

@end

@interface KNBodyPlaceholderInfo : KNPlaceholderInfo

+ (id)mixableObjectClasses;

- (int)kind;
- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (id)copyToInstantiateTemplatePlaceholder;
- (id)initWithKNPlaceholderInfo:(id)a0;

@end

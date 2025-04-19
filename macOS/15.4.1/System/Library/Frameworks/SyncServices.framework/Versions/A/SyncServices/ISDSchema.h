@class NSString, ISDFileReference, NSArray;

@interface ISDSchema : ISDDataObject <NSCoding> {
    NSString *_name;
    ISDFileReference *_bundleRef;
    ISDFileReference *_descriptionFile;
    NSArray *_dataClasses;
    NSArray *_entityComponents;
    NSString *_validatorClassName;
    NSString *_conflictResolverClassName;
    NSString *_uiHelperClassName;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bundle;
- (void)setDataClasses:(id)a0;
- (id)descriptionFile;
- (id)anchorChildren;
- (id)bundleRef;
- (id)conflictResolverClassName;
- (id)conflictUIHelperClassName;
- (id)dataClassWithName:(id)a0;
- (id)dataClasses;
- (id)entityComponentWithExtensionName:(id)a0 entityName:(id)a1;
- (id)entityComponents;
- (id)initWithName:(id)a0 bundleRef:(id)a1;
- (BOOL)morphInToObject:(id)a0;
- (void)setBundleRef:(id)a0;
- (void)setConflictResolverClassName:(id)a0;
- (void)setDescriptionFile:(id)a0;
- (void)setEntityComponents:(id)a0;
- (void)setUIHelperClassName:(id)a0;
- (void)setValidatorClassName:(id)a0;
- (id)uiHelperClassName;
- (id)validatorClassName;

@end

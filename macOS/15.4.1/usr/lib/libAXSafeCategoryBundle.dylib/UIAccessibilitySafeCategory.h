@class NSString;

@interface UIAccessibilitySafeCategory : NSObject

@property (copy, nonatomic) NSString *accessibilityIdentifier;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (id)_installSafeCategoryValidationMethod;
+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_addCategoryMethods:(struct objc_method **)a0 count:(unsigned int)a1 excluding:(id)a2 toClass:(Class)a3 isClass:(BOOL)a4;
+ (id)_installLocalValidationMethodOnClassNamed:(id)a0;
+ (id)_installSafeCategoryOnClass:(Class)a0 isManaged:(BOOL)a1;
+ (void)_installSafeCategoryOnClassNamed:(id)a0;
+ (id)_installSafeCategoryOnClassNamed:(id)a0 isManaged:(BOOL)a1;
+ (void)safeCategoryAddDependenciesToCollection:(id)a0;
+ (Class)safeCategoryTargetClass;

@end

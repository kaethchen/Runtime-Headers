@class NSString;

@interface AXBSafeCategory : NSObject

@property (copy, nonatomic) NSString *accessibilityIdentifier;

+ (void)initialize;
+ (id)safeCategoryTargetClassName;
+ (void)_addCategoryMethod:(struct objc_method { } *)a0 toClass:(Class)a1 isClass:(BOOL)a2;
+ (void)installCategoryOnClassNamed:(id)a0;

@end

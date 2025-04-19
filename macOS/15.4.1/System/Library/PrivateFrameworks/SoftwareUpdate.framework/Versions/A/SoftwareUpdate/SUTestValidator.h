@class NSDictionary;

@interface SUTestValidator : NSObject {
    NSDictionary *_productValidationsDict;
}

+ (id)sharedTestValidator;

- (id)init;
- (void)_loadProductValidations;
- (void)_plistDidChange:(id)a0;
- (unsigned long long)validationOverrideForProductKey:(id)a0;

@end

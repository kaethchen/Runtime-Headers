@class NSBundle;

@interface VNFrameworkResourceDescriptor : VNResourceDescriptor

@property (readonly) NSBundle *frameworkBundle;

+ (id)descriptorForFrameworkContainingClass:(Class)a0 error:(id *)a1;
+ (id)descriptorForFrameworkContainingClassNamed:(id)a0 error:(id *)a1;
+ (id)descriptorForFrameworkIdentifier:(id)a0 error:(id *)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;

@end

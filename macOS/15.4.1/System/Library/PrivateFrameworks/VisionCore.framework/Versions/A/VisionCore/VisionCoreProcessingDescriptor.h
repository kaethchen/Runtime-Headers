@class NSString, VisionCoreResourceVersion, VisionCoreProcessingDescriptorSpecifier;

@interface VisionCoreProcessingDescriptor : VisionCoreDescriptor

@property (readonly, nonatomic) VisionCoreProcessingDescriptorSpecifier *specifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) VisionCoreResourceVersion *version;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorForIdentifier:(id)a0 version:(id)a1 error:(id *)a2;
+ (id)resourcesBundle;
+ (id)descriptorsForIdentifier:(id)a0 error:(id *)a1;
+ (id)URLForResourceNamed:(id)a0 error:(id *)a1;
+ (id)availableIdentifiers;
+ (id)availableVersionsForIdentifier:(id)a0 error:(id *)a1;
+ (id)descriptorForSpecifier:(id)a0 error:(id *)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpecifier:(id)a0;

@end

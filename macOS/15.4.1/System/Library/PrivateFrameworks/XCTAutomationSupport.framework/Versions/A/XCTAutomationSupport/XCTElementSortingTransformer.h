@class NSArray;

@interface XCTElementSortingTransformer : XCTElementSetCodableTransformer <XCTCapabilitiesProviding>

@property (readonly, copy) NSArray *sortDescriptors;

+ (BOOL)supportsSecureCoding;
+ (void)provideCapabilitiesToBuilder:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (id)initWithSortDescriptors:(id)a0;
- (id)iteratorForInput:(id)a0;
- (id)requiredKeyPathsOrError:(id *)a0;
- (BOOL)supportsAttributeKeyPathAnalysis;
- (id)transform:(id)a0 relatedElements:(id *)a1;

@end

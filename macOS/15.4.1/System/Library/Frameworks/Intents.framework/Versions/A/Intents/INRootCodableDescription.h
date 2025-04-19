@class NSArray, NSDictionary;

@interface INRootCodableDescription : INCodableDescription <INWidgetPlistRepresentable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic, setter=_setReferencedCodableDescriptions:) NSArray *referencedCodableDescriptions;
@property (readonly, nonatomic) NSDictionary *_referencedCodableDescriptionsByClassName;

+ (BOOL)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (void)recursivelyAssignCodableDescriptionsFor:(id)a0 referencedCodableDescriptions:(id)a1 visitedCodableDescriptions:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)a0;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)a0;
- (long long)codableDescriptionType;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;

@end

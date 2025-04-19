@interface HKFeatureAvailabilityMustBeTrueRequirement : HKFeatureAvailabilityBaseRequirement <NSSecureCoding, NSCopying> {
    BOOL _isTrue;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWhatMustBeTrue:(BOOL)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;

@end

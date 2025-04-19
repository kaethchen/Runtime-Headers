@class NSNumber;

@interface INStartCallIntentDonationMetadata : INIntentDonationMetadata

@property double callDuration;
@property double timeToEstablish;
@property (copy) NSNumber *recentCallStatus;
@property (copy) NSNumber *disconnectedReason;

+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end

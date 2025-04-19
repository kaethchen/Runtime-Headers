@class NSString;

@interface HKFHIRIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *resourceType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)FHIRIdentifierWithString:(id)a0 error:(out id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)identifierForContainedResourceWithIdentifier:(id)a0 error:(id *)a1;
- (id)initWithResourceType:(id)a0 identifier:(id)a1;
- (id)parentResourceIdentifierWithError:(id *)a0;

@end

@class NSArray;

@interface PKPassAuxiliaryRegistrationRequirements : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *deviceSignatureRequirements;
@property (readonly, nonatomic) NSArray *deviceDecryptionRequirements;
@property (readonly, nonatomic) NSArray *allRequirements;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToPassAuxiliaryRegistrationRequirements:(id)a0;

@end

@class NSData;

@interface AVB17221AEMAuthenticationECC256PublicKey : AVB17221AEMAuthenticationKey

@property (nonatomic) unsigned long long relatedKeyID;
@property (copy, nonatomic) NSData *fieldSize;
@property (copy, nonatomic) NSData *semimajor;
@property (copy, nonatomic) NSData *semiminor;
@property (copy, nonatomic) NSData *primeDivisor;
@property (copy, nonatomic) NSData *generatorX;
@property (copy, nonatomic) NSData *generatorY;
@property (copy, nonatomic) NSData *publicX;
@property (copy, nonatomic) NSData *publicY;
@property (nonatomic) unsigned long long signatureKeyID;
@property (copy, nonatomic) NSData *ecdsaSignatureC;
@property (copy, nonatomic) NSData *ecdsaSignatureD;

+ (id)keyPathsForValuesAffectingEcdsaSignatureC;
+ (id)keyPathsForValuesAffectingEcdsaSignatureD;
+ (id)keyPathsForValuesAffectingFieldSize;
+ (id)keyPathsForValuesAffectingGeneratorX;
+ (id)keyPathsForValuesAffectingGeneratorY;
+ (id)keyPathsForValuesAffectingPrimeDivisor;
+ (id)keyPathsForValuesAffectingPublicX;
+ (id)keyPathsForValuesAffectingPublicY;
+ (id)keyPathsForValuesAffectingRelatedKeyID;
+ (id)keyPathsForValuesAffectingSemimajor;
+ (id)keyPathsForValuesAffectingSemiminor;
+ (id)keyPathsForValuesAffectingSignatureKeyID;

- (id)init;
- (void)setKeyData:(id)a0;
- (id)fieldSize;
- (id)ecdsaSignatureC;
- (id)publicX;
- (id)ecdsaSignatureD;
- (id)publicY;
- (id)generatorX;
- (id)generatorY;
- (id)primeDivisor;
- (unsigned long long)relatedKeyID;
- (id)semimajor;
- (id)semiminor;
- (void)setEcdsaSignatureC:(id)a0;
- (void)setEcdsaSignatureD:(id)a0;
- (void)setFieldSize:(id)a0;
- (void)setGeneratorX:(id)a0;
- (void)setGeneratorY:(id)a0;
- (void)setPrimeDivisor:(id)a0;
- (void)setPublicX:(id)a0;
- (void)setPublicY:(id)a0;
- (void)setRelatedKeyID:(unsigned long long)a0;
- (void)setSemimajor:(id)a0;
- (void)setSemiminor:(id)a0;
- (void)setSignatureKeyID:(unsigned long long)a0;
- (unsigned long long)signatureKeyID;

@end

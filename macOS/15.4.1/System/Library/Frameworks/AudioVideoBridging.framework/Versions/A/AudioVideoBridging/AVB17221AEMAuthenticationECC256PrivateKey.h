@class NSData;

@interface AVB17221AEMAuthenticationECC256PrivateKey : AVB17221AEMAuthenticationKey

@property (nonatomic) unsigned long long relatedKeyID;
@property (copy, nonatomic) NSData *fieldSize;
@property (copy, nonatomic) NSData *semimajor;
@property (copy, nonatomic) NSData *semiminor;
@property (copy, nonatomic) NSData *primeDivisor;
@property (copy, nonatomic) NSData *generatorX;
@property (copy, nonatomic) NSData *generatorY;
@property (copy, nonatomic) NSData *privateKey;

+ (id)keyPathsForValuesAffectingFieldSize;
+ (id)keyPathsForValuesAffectingGeneratorX;
+ (id)keyPathsForValuesAffectingGeneratorY;
+ (id)keyPathsForValuesAffectingPrimeDivisor;
+ (id)keyPathsForValuesAffectingPrivateKey;
+ (id)keyPathsForValuesAffectingRelatedKeyID;
+ (id)keyPathsForValuesAffectingSemimajor;
+ (id)keyPathsForValuesAffectingSemiminor;

- (id)init;
- (id)privateKey;
- (void)setPrivateKey:(id)a0;
- (void)setKeyData:(id)a0;
- (id)fieldSize;
- (id)generatorX;
- (id)generatorY;
- (id)primeDivisor;
- (unsigned long long)relatedKeyID;
- (id)semimajor;
- (id)semiminor;
- (void)setFieldSize:(id)a0;
- (void)setGeneratorX:(id)a0;
- (void)setGeneratorY:(id)a0;
- (void)setPrimeDivisor:(id)a0;
- (void)setRelatedKeyID:(unsigned long long)a0;
- (void)setSemimajor:(id)a0;
- (void)setSemiminor:(id)a0;

@end

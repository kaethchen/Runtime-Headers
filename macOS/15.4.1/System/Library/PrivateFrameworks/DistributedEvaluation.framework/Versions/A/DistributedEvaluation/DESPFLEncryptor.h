@class NSString;

@interface DESPFLEncryptor : NSObject

@property (copy, nonatomic) NSString *privatizationIdentifier;
@property (nonatomic) long long version;
@property (nonatomic) double weight;

+ (BOOL)privatizationSupported;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRecipe:(id)a0;
- (id)encryptedDataWithPublicKey:(id)a0 inPlaceDataFloatNumbers:(float *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)encryptAndPrivatizeDataWithRecipe:(id)a0 numbers:(float *)a1 count:(unsigned long long)a2 inPlace:(BOOL)a3 error:(id *)a4;
- (id)encryptedAndPrivatizedDataWithPublicKey:(id)a0 inPlaceNumbers:(float *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)encryptedAndPrivatizedDataWithPublicKey:(id)a0 numbers:(const float *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)encryptedDataWithPublicKey:(id)a0 data:(id)a1 error:(id *)a2;
- (id)encryptedDataWithPublicKey:(id)a0 dataFloatNumbers:(const float *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)encryptedDataWithPublicKey:(id)a0 dataNumbers:(const double *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)encryptedDataWithPublicKey:(id)a0 inPlaceDataNumbers:(double *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)initWithRecipeUserInfo:(id)a0;
- (id)initWithRecipeUserInfo:(id)a0 writeToSubmissionLogs:(BOOL)a1;
- (BOOL)pluginShouldAddNoiseAndEncryptResult;

@end

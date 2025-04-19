@interface FedStatsCategoricalTypePreEncoderFactory : NSObject

+ (id)forVariant:(id)a0 assetNamesInParameters:(id)a1 usingFieldValues:(id)a2;
+ (id)forVariant:(id)a0 mutateParameters:(id)a1 usingFieldValues:(id)a2 assetURLs:(id)a3 error:(id *)a4;
+ (id)forVariant:(id)a0 requiredFieldsInParameters:(id)a1;
+ (id)preEncoderForVariant:(id)a0 parameters:(id)a1 error:(id *)a2;

@end

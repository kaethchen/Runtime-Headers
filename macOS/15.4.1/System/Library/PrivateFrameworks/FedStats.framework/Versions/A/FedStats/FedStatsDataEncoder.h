@class NSDictionary, NSArray;

@interface FedStatsDataEncoder : NSObject

@property (retain, nonatomic) NSDictionary *dataTypes;
@property (retain, nonatomic) NSArray *typeConfiguration;

+ (id)encodeDataAndRecord:(id)a0 dataTypeContent:(id)a1 baseKey:(id)a2 errorOut:(id *)a3;
+ (id)encodeDataArrayAndRecord:(id)a0 dataTypeContent:(id)a1 baseKey:(id)a2 errorOut:(id *)a3;
+ (id)createWithDataTypeContent:(id)a0 possibleError:(id *)a1;
+ (id)defaultDataPointForDataTypeContent:(id)a0;
+ (id)encodeDataAndRecord:(id)a0 dataTypeContent:(id)a1 metadata:(id)a2 baseKey:(id)a3 errorOut:(id *)a4;
+ (id)encodeDataArray:(id)a0 dataTypeContent:(id)a1 resultType:(unsigned long long *)a2 errorOut:(id *)a3;
+ (id)encodeDataArrayAndRecord:(id)a0 dataTypeContent:(id)a1 metadata:(id)a2 baseKey:(id)a3 errorOut:(id *)a4;
+ (id)extractAssetNamesFrom:(id)a0 usingFieldValues:(id)a1;
+ (id)extractRequiredFieldsFrom:(id)a0;
+ (id)mutateDataTypeContent:(id)a0 usingFieldValues:(id)a1 assetURLs:(id)a2 error:(id *)a3;
+ (id)mutateDataTypeContent:(id)a0 usingFieldValues:(id)a1 assetURLs:(id)a2 requiredFields:(id *)a3 assetNames:(id *)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)decodeFromBitVector:(id)a0 possibleError:(id *)a1;
- (id)decodeFromBitVector:(id)a0 withType:(id)a1 possibleError:(id *)a2;
- (id)encodeToBitVector:(id)a0 possibleError:(id *)a1;
- (id)encodeToBitVector:(id)a0 withType:(id)a1 possibleError:(id *)a2;
- (id)encodeToIndex:(id)a0 error:(id *)a1;
- (id)encodeToIndex:(id)a0 withType:(id)a1 error:(id *)a2;
- (id)initWithDataTypes:(id)a0 combinationTypes:(id)a1;

@end

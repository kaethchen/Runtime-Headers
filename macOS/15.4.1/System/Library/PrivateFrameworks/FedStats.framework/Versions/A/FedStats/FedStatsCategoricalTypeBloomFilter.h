@class NSString, _PASBloomFilter;

@interface FedStatsCategoricalTypeBloomFilter : NSObject <FedStatsCategoricalTypeFilteringProtocol>

@property (readonly, copy, nonatomic) _PASBloomFilter *bloomFilter;
@property (readonly, copy, nonatomic) NSString *transformVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithParameters:(id)a0 error:(id *)a1;
+ (id)mutateParameters:(id)a0 usingFieldValues:(id)a1 assetURLs:(id)a2 requiredFields:(id *)a3 assetNames:(id *)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)filter:(id)a0;
- (id)initWithBloomFilter:(id)a0 transformVariant:(id)a1;

@end

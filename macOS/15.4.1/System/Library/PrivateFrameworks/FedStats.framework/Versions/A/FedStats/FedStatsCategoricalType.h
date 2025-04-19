@class NSArray, NSDictionary, FedStatsSQLiteCategoryDatabase, NSNumber;
@protocol FedStatsCategoricalTypePreEncoderProtocol, FedStatsCategoricalTypeTokenizerProtocol;

@interface FedStatsCategoricalType : FedStatsBoundedULongType

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSArray *categories;
@property (readonly, copy, nonatomic) NSDictionary *categoryMap;
@property (readonly, copy, nonatomic) FedStatsSQLiteCategoryDatabase *categoryFile;
@property (readonly, copy, nonatomic) NSArray *filters;
@property (readonly, copy, nonatomic) id<FedStatsCategoricalTypeTokenizerProtocol> tokenizer;
@property (readonly, copy, nonatomic) id<FedStatsCategoricalTypePreEncoderProtocol> preEncoder;
@property (readonly, copy, nonatomic) NSNumber *prefixSize;
@property (readonly, copy, nonatomic) NSNumber *fragmentSize;

+ (id)createFromDict:(id)a0 possibleError:(id *)a1;

- (void).cxx_destruct;
- (long long)dataType;
- (void)setVersion:(unsigned long long)a0;
- (id)initWithCategories:(id)a0;
- (id)initWithCategoryMap:(id)a0 categories:(id)a1;
- (id)sampleForIndex:(unsigned long long)a0;
- (id)decodeFromIndex:(id)a0 possibleError:(id *)a1;
- (id)encodeToIndex:(id)a0 possibleError:(id *)a1;
- (id)initWithCategoryFile:(id)a0;
- (id)initWithPrefixSize:(id)a0 fragmentSize:(id)a1 prefixTree:(id)a2 filters:(id)a3 tokenizer:(id)a4 preEncoder:(id)a5;
- (id)kOutOfCategories;

@end

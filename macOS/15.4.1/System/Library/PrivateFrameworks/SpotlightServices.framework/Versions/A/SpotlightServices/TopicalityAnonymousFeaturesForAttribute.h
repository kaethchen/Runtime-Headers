@interface TopicalityAnonymousFeaturesForAttribute : NSObject

@property (nonatomic) long long countAttributeQUTokenMatch;
@property (nonatomic) long long countAttributeUnigramMatch;
@property (nonatomic) long long countAttributeBigramMatch;
@property (nonatomic) long long countAttributeNgramMatch;
@property (nonatomic) long long countAttributeQUPrefixMatch;
@property (nonatomic) long long countAttributeUnigramPrefixMatch;
@property (nonatomic) long long countAttributeBigramPrefixMatch;
@property (nonatomic) long long countAttributeNgramPrefixMatch;

- (id)init;

@end

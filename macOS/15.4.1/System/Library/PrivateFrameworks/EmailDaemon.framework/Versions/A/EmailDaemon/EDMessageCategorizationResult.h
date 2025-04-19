@class EDMessageCategorizationResultMetadata, EMCategory;

@interface EDMessageCategorizationResult : NSObject

@property (retain, nonatomic) EMCategory *category;
@property (copy, nonatomic) EDMessageCategorizationResultMetadata *metadata;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 metadata:(id)a1;

@end

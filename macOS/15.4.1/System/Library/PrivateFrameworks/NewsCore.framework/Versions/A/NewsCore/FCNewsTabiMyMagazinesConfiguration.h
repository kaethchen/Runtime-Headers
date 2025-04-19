@class NSString;

@interface FCNewsTabiMyMagazinesConfiguration : NSObject

@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxTopicIds;
@property (nonatomic) long long titleEmbeddingDimension;
@property (retain, nonatomic) NSString *scoreOutputName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

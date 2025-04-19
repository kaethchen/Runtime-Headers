@class NSString;

@interface SGStructuredEventClassification : NSObject

@property (readonly, nonatomic) unsigned char category;
@property (readonly, nonatomic) unsigned char useCase;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *providerName;

+ (id)categoryForSchema:(id)a0;
+ (id)describeCategory:(unsigned char)a0;
+ (id)describeUseCase:(unsigned char)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (unsigned char)isCancelled;
- (unsigned char)categoryForCategoryString:(id)a0;
- (unsigned char)isCandidateForExtraction;
- (unsigned char)useCaseForUseCaseString:(id)a0;

@end

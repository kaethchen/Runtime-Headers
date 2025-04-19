@class NSString, NSDictionary, NSDate;

@interface PHQuestion : PHObject

@property (readonly, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short state;
@property (readonly, nonatomic) unsigned short entityType;
@property (readonly, nonatomic) unsigned short displayType;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSDictionary *additionalInfo;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) short questionVersion;

+ (id)entityKeyMap;
+ (id)fetchAnsweredQuestionCountsWithOptions:(id)a0;
+ (id)fetchAnsweredQuestionsWithOptions:(id)a0 validQuestionsOnly:(BOOL)a1;
+ (id)fetchAnsweredYesOrNoQuestionsWithOptions:(id)a0 validQuestionsOnly:(BOOL)a1;
+ (id)fetchInvalidatedQuestionsWithOptions:(id)a0;
+ (id)fetchQuestionsWithLocalIdentifiers:(id)a0 options:(id)a1 validQuestionsOnly:(BOOL)a2;
+ (id)fetchQuestionsWithOptions:(id)a0 validQuestionsOnly:(BOOL)a1;
+ (id)fetchType;
+ (id)fetchUnansweredQuestionsWithOptions:(id)a0 validQuestionsOnly:(BOOL)a1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)questionsWithValidEntitiesFromQuestions:(id)a0 photoLibrary:(id)a1;
+ (id)stringForQuestionType:(unsigned short)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end

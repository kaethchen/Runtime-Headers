@class NSString;

@interface CSUSearchableKnowledgeDBObject : NSManagedObject

@property (copy, nonatomic) NSString *category;
@property (nonatomic) double confidenceValue;
@property (nonatomic) long long dbUniqueId;
@property (nonatomic) short idType;
@property (nonatomic) double latitude;
@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSString *localizedSynonyms;
@property (nonatomic) double longitude;
@property (nonatomic) long long qid;
@property (nonatomic) BOOL sensitiveLocation;
@property (copy, nonatomic) NSString *localizedSynonymsDictionary;
@property (nonatomic) int version;
@property (copy, nonatomic) NSString *vertical;
@property (copy, nonatomic) NSString *localizedLabelDictionary;

+ (id)fetchRequest;
+ (unsigned long long)getUniqueDbId:(unsigned long long)a0 idType:(short)a1;
+ (unsigned long long)getUniqueDbId:(unsigned long long)a0 idType:(short)a1 locale:(id)a2;

- (void)copyFromEntity:(id)a0;
- (BOOL)convertToEntity:(id *)a0 error:(id *)a1;

@end

@class NSString;

@interface PHSearchIndexEntityResult : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *normalizedText;
@property (readonly, nonatomic) NSString *lookupIdentifier;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) unsigned long long matchType;

+ (void)enumerateIndexEntitiesMatchingTexts:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
+ (id)indexEntitiesMatchingText:(id)a0 options:(id)a1 error:(id *)a2;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)jsonDictionary;
- (id)initFromPSIGroup:(id)a0 matchType:(unsigned long long)a1;
- (BOOL)isEqualIgnoringMatchType:(id)a0;

@end

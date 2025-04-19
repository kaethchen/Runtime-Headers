@class NSArray, NSString, NSDate, NSNumber;

@interface PHSearchResult : NSObject

@property (readonly, nonatomic) unsigned long long retrievalType;
@property (readonly, nonatomic) NSNumber *l1Score;
@property (readonly, nonatomic) NSNumber *l2Score;
@property (readonly, nonatomic) NSNumber *collectionScore;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *addedDate;
@property (readonly, nonatomic) NSArray *assetAlbumUUIDs;
@property (readonly, nonatomic) NSArray *assetMemoryUUIDs;
@property (readonly, nonatomic) NSArray *assetHighlightUUIDs;
@property (readonly, nonatomic) NSArray *personUUIDS;
@property (readonly, nonatomic) NSArray *sceneIdentifiers;
@property (readonly, nonatomic) NSArray *audioIdentifiers;
@property (readonly, nonatomic) NSArray *humanActionIdentifiers;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSArray *embeddingDistances;
@property (readonly, nonatomic) BOOL hasOCRTextMatch;
@property (readonly, nonatomic) BOOL isExclusivelyExactOCRTextMatch;
@property (readonly, nonatomic) BOOL isSensitiveLocation;
@property (readonly, nonatomic) unsigned long long matchType;

- (id)description;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (BOOL)isEligibleForSuggestions;
- (id)initWithSearchResultType:(unsigned long long)a0 uuid:(id)a1 personUUIDs:(id)a2 sceneIdentifiers:(id)a3 audioIdentifiers:(id)a4 humanActionIdentifiers:(id)a5 retrievalType:(unsigned long long)a6 hasOCRTextMatch:(BOOL)a7 isSensitiveLocation:(BOOL)a8 embeddingDistances:(id)a9 l1Score:(id)a10 l2Score:(id)a11 collectionScore:(id)a12 assetAlbumUUIDs:(id)a13 assetMemoryUUIDs:(id)a14 assetHighlightUUIDs:(id)a15 creationDate:(id)a16 addedDate:(id)a17;
- (id)redactedJSONDictionary;
- (void)releaseOwningCollectionUUIDs;

@end

@class NSCalendar, PLUtilityAssetPool, PLSearchIndexDateFormatter, CSUSearchableKnowledgeObjectStore, NSLocale, NSDictionary, PLSearchIndexSceneTaxonomyProvider, CSCustomAttributeKey;
@protocol PLSearchIndexingContextDelegate;

@interface PLSearchIndexingContext : NSObject

@property (readonly, weak, nonatomic) id<PLSearchIndexingContextDelegate> delegate;
@property (readonly, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (readonly, nonatomic) CSUSearchableKnowledgeObjectStore *csuTaxonomyObjectStore;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) PLSearchIndexDateFormatter *searchIndexDateFormatter;
@property (readonly, nonatomic) BOOL isSharedLibraryEnabled;
@property (readonly, copy, nonatomic) NSDictionary *seasonSynonymsBySeason;
@property (readonly, copy, nonatomic) NSDictionary *synonymsByIndexCategoryMask;
@property (readonly, nonatomic) PLUtilityAssetPool *utilityAssetPool;
@property (readonly, nonatomic) CSCustomAttributeKey *photosAlbumUUIDsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosAlbumAssetCountsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosMemoryUUIDsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosMemoryAssetCountsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosHighlightUUIDsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosHighlightAssetCountsKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosSensitiveLocationKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosReverseLocationDataIsValidKey;
@property (readonly, nonatomic) CSCustomAttributeKey *photosEmbeddingCountKey;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSceneTaxonomyProvider:(id)a0 csuTaxonomyObjectStore:(id)a1 locale:(id)a2 calendar:(id)a3 indexDateFormatter:(id)a4 delegate:(id)a5 seasonSynonyms:(id)a6 synonymsByIndexCategoryMask:(id)a7;

@end

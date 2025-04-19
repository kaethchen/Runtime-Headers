@class NSString, NSCalendar, CSUSearchableKnowledgeObjectStore, PLSearchIndexSceneTaxonomyProvider, PLPhotoLibraryPathManager, NSLocale, PLSearchIndexingContext;

@interface PLSearchIndexConfiguration : NSObject <PLSearchIndexingContextDelegate> {
    BOOL _isSharedLibraryEnabled;
}

@property (class, readonly, nonatomic) NSLocale *locale;
@property (class, readonly, nonatomic) NSCalendar *calendar;
@property (class, readonly, nonatomic) unsigned long long featureSettings;
@property (class) BOOL shouldIndexFilenames;

@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (retain, nonatomic) PLSearchIndexingContext *indexingContext;
@property (retain, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (retain, nonatomic) CSUSearchableKnowledgeObjectStore *csuTaxonomyObjectStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)currentEmbeddingModelVersion;
+ (unsigned long long)currentSearchIndexVersion;
+ (unsigned long long)currentUtilityTypeClassifierVersion;

@end

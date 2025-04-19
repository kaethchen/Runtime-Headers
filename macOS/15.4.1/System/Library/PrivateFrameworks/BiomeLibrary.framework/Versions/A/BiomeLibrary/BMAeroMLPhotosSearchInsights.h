@class NSString;

@interface BMAeroMLPhotosSearchInsights : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL wasThereAnyResultsShown;
@property (nonatomic) BOOL hasWasThereAnyResultsShown;
@property (readonly, nonatomic) unsigned int searchResultSize;
@property (nonatomic) BOOL hasSearchResultSize;
@property (readonly, nonatomic) BOOL didUserViewAnyPhoto;
@property (nonatomic) BOOL hasDidUserViewAnyPhoto;
@property (readonly, nonatomic) unsigned int viewedPhotoCount;
@property (nonatomic) BOOL hasViewedPhotoCount;
@property (readonly, nonatomic) int uiSurface;
@property (readonly, nonatomic) unsigned int sizeOfPhotoDB;
@property (nonatomic) BOOL hasSizeOfPhotoDB;
@property (readonly, nonatomic) unsigned int numberOfSearchesFromThisSurfaceLastWeek;
@property (nonatomic) BOOL hasNumberOfSearchesFromThisSurfaceLastWeek;
@property (readonly, nonatomic) unsigned int numberOfSearchesFromThisSurfaceWeeklyAvg;
@property (nonatomic) BOOL hasNumberOfSearchesFromThisSurfaceWeeklyAvg;
@property (readonly, nonatomic) NSString *queryRaw;
@property (readonly, nonatomic) unsigned int numberOfTokensInQuery;
@property (nonatomic) BOOL hasNumberOfTokensInQuery;
@property (readonly, nonatomic) unsigned int numberOfKnownEntitiesInQuery;
@property (nonatomic) BOOL hasNumberOfKnownEntitiesInQuery;
@property (readonly, nonatomic) BOOL isSpecificPersonInQuery;
@property (nonatomic) BOOL hasIsSpecificPersonInQuery;
@property (readonly, nonatomic) BOOL isGeneralPersonReferenceInQuery;
@property (nonatomic) BOOL hasIsGeneralPersonReferenceInQuery;
@property (readonly, nonatomic) BOOL isSpecificLocationInQuery;
@property (nonatomic) BOOL hasIsSpecificLocationInQuery;
@property (readonly, nonatomic) BOOL isGeneralLocationReferenceInQuery;
@property (nonatomic) BOOL hasIsGeneralLocationReferenceInQuery;
@property (readonly, nonatomic) BOOL isSpecificDateInQuery;
@property (nonatomic) BOOL hasIsSpecificDateInQuery;
@property (readonly, nonatomic) BOOL isGeneralDateReferenceInQuery;
@property (nonatomic) BOOL hasIsGeneralDateReferenceInQuery;
@property (readonly, nonatomic) BOOL isHolidayReferenceInQuery;
@property (nonatomic) BOOL hasIsHolidayReferenceInQuery;
@property (readonly, nonatomic) BOOL isActionRunningInQuery;
@property (nonatomic) BOOL hasIsActionRunningInQuery;
@property (readonly, nonatomic) BOOL isActionHoldingInQuery;
@property (nonatomic) BOOL hasIsActionHoldingInQuery;
@property (readonly, nonatomic) BOOL isActionClimbingInQuery;
@property (nonatomic) BOOL hasIsActionClimbingInQuery;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithWasThereAnyResultsShown:(id)a0 searchResultSize:(id)a1 didUserViewAnyPhoto:(id)a2 viewedPhotoCount:(id)a3 uiSurface:(int)a4 sizeOfPhotoDB:(id)a5 numberOfSearchesFromThisSurfaceLastWeek:(id)a6 numberOfSearchesFromThisSurfaceWeeklyAvg:(id)a7 queryRaw:(id)a8 numberOfTokensInQuery:(id)a9 numberOfKnownEntitiesInQuery:(id)a10 isSpecificPersonInQuery:(id)a11 isGeneralPersonReferenceInQuery:(id)a12 isSpecificLocationInQuery:(id)a13 isGeneralLocationReferenceInQuery:(id)a14 isSpecificDateInQuery:(id)a15 isGeneralDateReferenceInQuery:(id)a16 isHolidayReferenceInQuery:(id)a17 isActionRunningInQuery:(id)a18 isActionHoldingInQuery:(id)a19 isActionClimbingInQuery:(id)a20;

@end

@interface SUISRadarUtilities : NSObject

+ (id)filePathForCapturedPhotosIndexInfo;
+ (id)filePathForCapturedScreenshot;
+ (id)filePathForWrittenData:(id)a0 to:(id)a1;
+ (void)fileRadarWithCommand:(id)a0;
+ (id)internalReleaseAgreementText;
+ (void)logRankingDiagnosticsWithSections:(id)a0;
+ (void)logResultSectionsWithSections:(id)a0 rankingManager:(id)a1;
+ (id)pathToSpotlightFiles;
+ (id)rankingDiagnosticsFilePath;
+ (id)resultSectionsFilePath;
+ (id)searchResultCategoriesFilePath;

@end

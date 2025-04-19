@class NSString;

@interface PXFeedbackTapToRadarUtilities : NSObject

@property (class, readonly, nonatomic) NSString *summaryDescription;
@property (class, readonly, nonatomic) NSString *defaultDescription;
@property (class, readonly, nonatomic) NSString *internalReleaseAgreementTitle;
@property (class, readonly, nonatomic) NSString *internalReleaseAgreement;

+ (id)_tempDirectoryURL;
+ (id)attachmentURLForDiagnosticDictionaries:(id)a0 descriptionName:(id)a1;
+ (id)cloneAsset:(id)a0 resourceType:(long long)a1 toDirectory:(id)a2;
+ (id)detailedDebugDescriptionFileForAsset:(id)a0;
+ (void)fileRadarWithTitle:(id)a0 description:(id)a1 classification:(id)a2 componentID:(id)a3 componentName:(id)a4 componentVersion:(id)a5 keyword:(id)a6 attachmentURLs:(id)a7 includeSysDiagnose:(BOOL)a8 completionHandler:(id /* block */)a9;
+ (void)fileRadarWithTitle:(id)a0 description:(id)a1 classification:(id)a2 componentID:(id)a3 componentName:(id)a4 componentVersion:(id)a5 keyword:(id)a6 screenshotURLs:(id)a7 attachmentURLs:(id)a8 includeSysDiagnose:(BOOL)a9 includeInternalRelease:(BOOL)a10 additionalExtensionIdentifiers:(id)a11 completionHandler:(id /* block */)a12;

@end

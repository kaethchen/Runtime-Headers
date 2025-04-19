@class NSString, NSMutableArray, NSMutableDictionary;

@interface AXAuditReportGenerator : NSObject

@property (retain, nonatomic) NSMutableArray *_issues;
@property (retain, nonatomic) NSMutableDictionary *_auditScreenToIssuesMapping;
@property (copy, nonatomic) NSString *deviceName;

- (id)init;
- (void).cxx_destruct;
- (id)_jsonArrayForIssues:(id)a0 screenName:(id)a1;
- (id)_jsonDictionary;
- (id)_anyAuditIssueFromResults:(id)a0;
- (id)_defaultSavePath;
- (id)_fileExtensionForReportType:(long long)a0;
- (id)_fullOutputPathForReportType:(long long)a0 outputPath:(id)a1 outputFilename:(id)a2;
- (id)_generateHTMLSourceFromTemplates;
- (void)_generateMapOfScreensToIssues:(id)a0;
- (id)_generateTextSourceForIssues:(id)a0 reportType:(long long)a1;
- (id)_htmlTemplate;
- (id)_htmlTemplatePath;
- (id)_jsonData;
- (id)_jsonDictionaryForAuditIssueImage:(id)a0 thumbnailOnly:(BOOL)a1;
- (id)_jsonDictionaryForIssue:(id)a0 screenName:(id)a1;
- (id)_jsonDictionaryForScreen:(id)a0 issuesOnScreen:(id)a1;
- (id)_jsonString;
- (id)_locStringForKey:(id)a0;
- (id)_pdfImageAttributedStringForImage:(id)a0;
- (void)_processScreenshotsForAXAuditResult:(id)a0 completion:(id /* block */)a1;
- (id)_rtfImageAttributedStringForImage:(id)a0;
- (void)_writeToPDFPath:(id)a0 withContent:(id)a1;
- (void)_writeToRTFPath:(id)a0 withContent:(id)a1;
- (void)appendIssues:(id)a0;
- (id)generateReportType:(long long)a0 outputPath:(id)a1 outputFilename:(id)a2 error:(id *)a3;
- (void)generateXCTestReportType:(long long)a0 forAuditResult:(id)a1 completion:(id /* block */)a2;
- (id)imageDataForIssue:(id)a0 thumbnailOnly:(BOOL)a1;
- (id)reportHeaderForIssues:(id)a0;
- (id)textDescriptionForIssues:(id)a0;

@end

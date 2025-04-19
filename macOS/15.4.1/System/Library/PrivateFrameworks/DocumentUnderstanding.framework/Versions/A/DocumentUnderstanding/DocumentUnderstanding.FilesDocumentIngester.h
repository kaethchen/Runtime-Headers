@interface DocumentUnderstanding.FilesDocumentIngester : NSObject

+ (id)readFromMessageJsonWithFileURL:(id)a0;
+ (id)readFromMessageTextWithFileURL:(id)a0;
+ (id)getEffectiveFileExtensionForURLWithFileURL:(id)a0;
+ (id)ingestDocumentFromFileWithFileURL:(id)a0;
+ (id)ingestDocumentFromMessageFileWithFileURL:(id)a0;
+ (id)readFromEMLWithFileURL:(id)a0;
+ (id)readFromJsonWithFileURL:(id)a0;
+ (id)readFromOfficeWithFileURL:(id)a0;
+ (id)readFromPDFWithFileURL:(id)a0;
+ (id)readFromTextWithFileURL:(id)a0;
+ (id)readTextFromImageOn:(id)a0;

- (id)init;

@end

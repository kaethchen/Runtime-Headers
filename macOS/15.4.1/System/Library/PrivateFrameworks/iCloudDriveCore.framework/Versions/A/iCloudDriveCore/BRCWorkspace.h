@interface BRCWorkspace : NSObject

+ (BOOL)brc_openDirectoryAtURL:(id)a0 error:(id *)a1;
+ (BOOL)brc_openDocumentAtURL:(id)a0 appURL:(id)a1 error:(id *)a2;
+ (BOOL)brc_openDocumentAtURL:(id)a0 appURL:(id)a1 isSharedDocs:(BOOL)a2 error:(id *)a3;

@end

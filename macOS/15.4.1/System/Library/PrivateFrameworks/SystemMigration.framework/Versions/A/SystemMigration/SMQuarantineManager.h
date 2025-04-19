@class NSXPCConnection;

@interface SMQuarantineManager : NSObject

@property (retain) NSXPCConnection *pdfXPCConnection;
@property unsigned long long seenReasons;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)markRelocatedItemsWithMetadata:(id)a0;
- (void)clearSecurityFromQuarantineAtRoot:(id)a0;
- (id)createLPDFShellAt:(id)a0;
- (void)generateSummaryDocument:(id)a0 withErrors:(id)a1;
- (void)generateSummaryDocumentWithErrors:(id)a0;
- (void)moveAsideExistingQuarantineAtRoot:(id)a0;
- (id)quarantineLocationForReason:(unsigned long long)a0;
- (BOOL)renderPDF:(id)a0 to:(id)a1;

@end

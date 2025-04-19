@interface ICLegacyContentUtilities : NSObject

+ (void)addAttachmentFromWebResource:(id)a0 toNote:(id)a1 context:(id)a2;
+ (id)contentStringFromWebArchive:(id)a0;
+ (id)createAttachmentForNote:(id)a0 withName:(id)a1 context:(id)a2;
+ (id)generateContentID;
+ (id)newNoteBasedOnModernNote:(id)a0 inFolder:(id)a1 context:(id)a2;
+ (id)suggestedFilenameForURL:(id)a0 mimeType:(id)a1;

@end

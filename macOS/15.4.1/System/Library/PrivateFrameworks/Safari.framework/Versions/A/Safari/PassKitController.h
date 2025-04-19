@interface PassKitController : NSObject

+ (BOOL)isPassMIMEType:(id)a0;
+ (id)_passesWithFileURL:(id)a0 mimeType:(id)a1 error:(id *)a2;
+ (BOOL)canLoadPassKit;
+ (BOOL)canOpenURLAsPass:(id)a0 withMIMEType:(id)a1;
+ (BOOL)isPassesMIMEType:(id)a0;
+ (BOOL)openPassWithFileURL:(id)a0 mimeType:(id)a1 forDownload:(id)a2 inWindow:(id)a3 error:(id *)a4;

@end

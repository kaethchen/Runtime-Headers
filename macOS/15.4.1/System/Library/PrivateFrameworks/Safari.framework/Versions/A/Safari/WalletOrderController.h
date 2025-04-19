@interface WalletOrderController : NSObject

+ (BOOL)openWalletOrderWithFileURL:(id)a0 mimeType:(id)a1 forDownload:(id)a2 inWindow:(id)a3 error:(id *)a4;
+ (BOOL)canLoadWalletOrders;
+ (BOOL)canOpenURLAsWalletOrder:(id)a0 withMIMEType:(id)a1;
+ (BOOL)isWalletOrderMIMEType:(id)a0;

@end

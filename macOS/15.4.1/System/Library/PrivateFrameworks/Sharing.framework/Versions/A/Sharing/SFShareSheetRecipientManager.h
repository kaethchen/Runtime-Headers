@interface SFShareSheetRecipientManager : NSObject

+ (id)createRemoteDataProxyWithErrorHandler:(id /* block */)a0;
+ (void)requestMessagesRecipientInfoForSessionID:(id)a0 completionHandler:(id /* block */)a1;

@end

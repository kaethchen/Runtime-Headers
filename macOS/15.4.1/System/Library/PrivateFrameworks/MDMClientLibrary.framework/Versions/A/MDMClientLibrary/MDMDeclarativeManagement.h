@interface MDMDeclarativeManagement : NSObject

+ (void)downloadDataAtURL:(id)a0 downloadURL:(id)a1 completionHandler:(id /* block */)a2;
+ (void)fetchDataAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_createUnsupportedFeatureError;
+ (id)_createNoInstallationError;
+ (void)executeRequestForEndpoint:(id)a0 channelType:(unsigned long long)a1 requestData:(id)a2 completionHandler:(id /* block */)a3;

@end

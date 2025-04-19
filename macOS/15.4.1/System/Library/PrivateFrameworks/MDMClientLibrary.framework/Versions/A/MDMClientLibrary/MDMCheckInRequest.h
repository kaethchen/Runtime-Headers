@interface MDMCheckInRequest : NSObject

+ (id)_createUnsupportedFeatureError;
+ (id)_createNoInstallationError;
+ (void)executeRequestForMessageType:(id)a0 channelType:(unsigned long long)a1 requestDict:(id)a2 completionHandler:(id /* block */)a3;

@end

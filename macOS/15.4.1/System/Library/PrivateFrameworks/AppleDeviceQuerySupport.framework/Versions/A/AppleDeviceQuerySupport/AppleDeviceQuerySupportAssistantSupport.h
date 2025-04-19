@interface AppleDeviceQuerySupportAssistantSupport : NSObject

+ (id)classList;
+ (id)armoryClassName;
+ (void *)getDylibHandlerWithError:(id *)a0;
+ (id)getSharedInstanceByName:(id)a0 withError:(id *)a1;
+ (id)getXpcProxyWithError:(id *)a0;
+ (BOOL)isInternalAssistant;
+ (id)isKey:(id)a0 withError:(id *)a1;
+ (id)serviceXpcName;

@end

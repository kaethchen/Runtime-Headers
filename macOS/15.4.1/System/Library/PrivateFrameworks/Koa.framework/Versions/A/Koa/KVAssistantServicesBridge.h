@interface KVAssistantServicesBridge : NSObject

+ (BOOL)isASRSupported;
+ (BOOL)isSiriUODSupported;
+ (id)iCloudAltDSIDFromSharedUserId:(id)a0 error:(id *)a1;
+ (BOOL)isSiriMUXSupported;

@end

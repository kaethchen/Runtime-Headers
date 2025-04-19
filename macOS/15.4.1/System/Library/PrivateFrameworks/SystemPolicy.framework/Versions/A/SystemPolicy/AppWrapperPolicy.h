@interface AppWrapperPolicy : NSObject

+ (id)appWrapperPolicyResult:(id)a0 forDeviceID:(id)a1 installProfile:(BOOL)a2 checkResources:(BOOL)a3 withProgressCallback:(id /* block */)a4;
+ (BOOL)appWrapperProfileIsTrusted:(id)a0;

@end

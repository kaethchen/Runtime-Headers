@interface CNAuditTokenUtilities : NSObject

+ (int)processIdentifierForAuditToken:(id)a0;
+ (id)_bundleIdentifierFromInfoPlistForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)_bundleIdentifierFromSecTaskForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)bundleIdentifierForAuditToken:(id)a0;
+ (id)os_log;
+ (id)processNameForAuditToken:(id)a0;

@end

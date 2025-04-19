@interface _NSExtensionContextVendor : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_startListening;
+ (Class)_extensionContextClass;
+ (id)_extensionDictionary;
+ (id)_extensionMainStoryboard;
+ (Class)_extensionPrincipalClass;
+ (id)_sharedExtensionContextVendor;
+ (void)_startListening:(BOOL)a0;

- (id)init;
- (id)_init;
- (id)_extensionContextForUUID:(id)a0;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (void)_tearDownContextWithUUID:(id)a0;

@end

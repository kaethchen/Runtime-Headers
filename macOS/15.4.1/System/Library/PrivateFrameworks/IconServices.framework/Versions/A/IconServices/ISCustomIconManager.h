@interface ISCustomIconManager : NSObject

+ (id)sharedInstance;
+ (id)defaultSpecialFolderTypeMapping;
+ (id)overrideTypeMapping;

- (id)_init;
- (id)overrideIconForURL:(id)a0;
- (id)overrideResourceForBundleIdentifier:(id)a0;
- (id)specialFolderTypeForURL:(id)a0;

@end

@class NSMutableDictionary;

@interface _UNNotificationContentExtensionCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *extensions;

- (id)init;
- (void).cxx_destruct;
- (void)_addExtension:(id)a0;
- (void)_removeAllExtensions;
- (id)_sourceDictForSource:(id)a0;
- (id)extensionForNotificationSourceIdentifier:(id)a0 categoryIdentifier:(id)a1;
- (void)registerExtensions:(id)a0;

@end

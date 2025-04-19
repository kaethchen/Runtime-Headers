@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject {
    NSMutableDictionary *_displayBundlesById;
}

+ (id)sharedLoader;
+ (BOOL)useBlankDisplayBundleForPerformanceTesting;

- (id)init;
- (void).cxx_destruct;
- (void)_lookForDisplayBundles;
- (Class)displayBundleClassForDisplayBundleID:(id)a0;
- (id)displayBundleForPreview:(id)a0 owner:(id)a1;
- (id)displayBundleForPreview:(id)a0 owner:(id)a1 forcedDisplayBundleID:(id)a2;
- (Class)loadDisplayBundle:(id)a0;
- (id)newPreviewDocumentDisplayBundleForPreview:(id)a0;
- (void)registerDisplayBundle:(id)a0 withBundleIdentifier:(id)a1;

@end

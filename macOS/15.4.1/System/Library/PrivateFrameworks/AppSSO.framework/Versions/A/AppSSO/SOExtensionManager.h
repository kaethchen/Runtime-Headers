@class NSArray, SOExtensionFinder, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (readonly, nonatomic) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (BOOL)_isMatchedExtension:(id)a0 forBundleIdentifier:(id)a1;
+ (void)_sendNotificationsLoadedExtensions:(id)a0 new:(id)a1 removed:(id)a2;
+ (id)internalExtensionBundleIdentifier;
+ (id)internalExtensionsBundleIdentifiers;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)a0;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)a0;
+ (BOOL)isTiburonExtensionBundleIdentifier:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadExtensions;
- (void)_doBeginMatchingExtensions;
- (void)_doEndMatchingExtensions;
- (id)_doLoadExtensions;
- (void)beginMatchingExtensions;
- (void)endMatchingExtensions;
- (BOOL)isLoadedExtensionWithBundleIdentifer:(id)a0;
- (void)loadExtensionWithBundleIdentifer:(id)a0 completion:(id /* block */)a1;
- (id)loadExtensionWithBundleIdentifier:(id)a0;
- (id)loadInternalExtension;
- (id)loadedExtensionWithBundleIdentifer:(id)a0;
- (id)loadedInternalExtension;
- (void)unloadExtensions;

@end

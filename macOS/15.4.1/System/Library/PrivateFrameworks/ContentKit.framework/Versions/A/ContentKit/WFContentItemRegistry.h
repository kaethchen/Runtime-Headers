@class NSMutableDictionary, NSSet, NSMutableSet;

@interface WFContentItemRegistry : NSObject

@property (class, readonly, nonatomic) WFContentItemRegistry *sharedRegistry;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMutableDictionary *lock_contentItemClassesByType;
@property (readonly, nonatomic) NSMutableSet *lock_allItemClasses;
@property (readonly, nonatomic) NSSet *contentItemClasses;
@property (readonly, nonatomic) NSSet *allOwnedTypes;

+ (id)allContentItemClassesInContentKit;
+ (id)inputContentItemClassesMatchingShortcutInputClasses:(id)a0;
+ (id)shortcutInputClassesMatchingInputContentItemsOfClasses:(id)a0 hostBundleIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (Class)contentItemClassForType:(id)a0;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)a0;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)a0 hostBundleIdentifier:(id)a1;
- (id)contentItemClassesSupportingType:(id)a0;
- (void)lock_registerContentItemClass:(Class)a0;
- (void)rediscoverContentItemClassesIfNeeded;
- (void)registerContentItemClass:(Class)a0;

@end

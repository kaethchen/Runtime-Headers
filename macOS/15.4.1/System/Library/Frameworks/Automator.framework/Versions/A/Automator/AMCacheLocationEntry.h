@class NSString, NSMutableDictionary, NSURL, NSDate;

@interface AMCacheLocationEntry : NSObject

@property (retain) NSMutableDictionary *actionArraysByType;
@property (retain) NSMutableDictionary *regularActionsByBundleIdentifier;
@property (copy) NSDate *rootDirectoryModificationDate;
@property (copy) NSDate *automatorDirectoryModificationDate;
@property (retain) NSMutableDictionary *actionsLoadedBooleansByType;
@property (copy) NSString *firstKeyInPlistData;
@property (readonly, nonatomic) BOOL needsWrite;
@property (readonly, nonatomic) NSURL *locationURL;
@property (retain) NSURL *automatorDirectoryLocationURL;
@property (retain) NSURL *rootDirectoryLocationURL;
@property (readonly, nonatomic) struct __CFString { } *libraryBundleIdentifierForLaunchServices;

+ (id)cacheLocationEntryForURL:(id)a0 propertyListData:(id)a1;
+ (id)diskBasedCacheLocationEntryForURL:(id)a0;
+ (BOOL)validateCacheLocationEntryForLocationURL:(id)a0 cacheFilePropertyListData:(id)a1 error:(id *)a2;
+ (id)validatedCacheLocationEntryForURL:(id)a0 propertyListData:(id)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)propertyListRepresentation;
- (void)_addAction:(id)a0 actionType:(id)a1;
- (id)_generateActionsForActionType:(id)a0;
- (id)actionWithBundleIdentifier:(id)a0;
- (id)actionsForActionType:(id)a0;
- (id)cacheDictionaryForAction:(id)a0;
- (void)loadAllActionsForActionType:(id)a0;
- (void)loadAllActionsIfNeededForActionType:(id)a0;
- (id)valueForKey:(id)a0 forActionWithBundleIdentifier:(id)a1;

@end

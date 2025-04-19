@class NSString;

@interface WFLibraryQuery : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ performer;
    void /* unknown type, empty encoding */ identity;
    void /* unknown type, empty encoding */ queryDescription;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (id)deletedFolders;
+ (id)sortedVisibleFolders;
+ (id)sortedWorkflowsWithQuery:(id)a0;
+ (id)sortedGroupings;
+ (id)sortedWorkflowsWithQuery:(id)a0 hasTombstonedConflicts:(BOOL)a1;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 associatedAppBundleIdentifier:(id)a2;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 hasAssociatedBundleIdentifier:(BOOL)a2;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 limit:(long long)a2;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 nameContaining:(id)a2 limit:(long long)a3;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 nameEqualing:(id)a2;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)performReturningCollectionsIn:(id)a0 database:(id)a1 error:(id *)a2;
- (id)performReturningShortcutsIn:(id)a0 database:(id)a1 error:(id *)a2;

@end

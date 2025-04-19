@class NSString, NSArray;

@interface WFLibrary : NSObject {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ capsule;
}

@property (nonatomic, readonly) NSString *dotRepresentation;
@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) NSArray *folders;
@property (nonatomic, readonly) NSArray *shortcutIdentifiers;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSString *identifier;

+ (void)performWithoutNotifyingObservers:(id /* block */)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 version:(id)a1;
- (id)collectionWithIdentifier:(id)a0;
- (id)folderContainingShortcut:(id)a0 error:(id *)a1;
- (BOOL)addShortcutWithIdentifier:(id)a0 toCollectionWithIdentifier:(id)a1 error:(id *)a2;
- (BOOL)appendShortcutWithIdentifier:(id)a0 toFolder:(id)a1 error:(id *)a2;
- (id)capsuleDataWithError:(id *)a0;
- (id)collectionAndFolderIdentifiersContainingShortcut:(id)a0 error:(id *)a1;
- (id)collectionWithWorkflowType:(id)a0;
- (id)collectionsAndFoldersContainingShortcut:(id)a0 error:(id *)a1;
- (id)collectionsContainingShortcut:(id)a0 error:(id *)a1;
- (void)deleteFolderWithIdentifier:(id)a0;
- (id)folderWithIdentifier:(id)a0 error:(id *)a1;
- (id)folderWithName:(id)a0 tombstoned:(BOOL)a1;
- (id)indexOfShortcutWithIdentifier:(id)a0 inCollectionWithIdentifier:(id)a1;
- (id)indexOfShortcutWithIdentifier:(id)a0 inFolderWithIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 version:(id)a1 data:(id)a2;
- (id)insertFolderWithName:(id)a0 icon:(unsigned short)a1 identifier:(id)a2 error:(id *)a3;
- (id)insertFolderWithName:(id)a0 icon:(unsigned short)a1 identifier:(id)a2 insertAt:(long long)a3 error:(id *)a4;
- (void)insertShortcutWithId:(id)a0;
- (BOOL)insertShortcutWithIdentifier:(id)a0 atIndex:(long long)a1 toCollection:(id)a2 error:(id *)a3;
- (BOOL)isEqualWithOther:(id)a0;
- (BOOL)mergeWithOther:(id)a0 error:(id *)a1;
- (BOOL)moveFolders:(id)a0 toIndexes:(id)a1 error:(id *)a2;
- (BOOL)moveShortcutWithIdentifier:(id)a0 toIndex:(long long)a1 ofCollectionWithIdentifier:(id)a2 error:(id *)a3;
- (BOOL)moveShortcutWithIdentifier:(id)a0 toIndex:(long long)a1 ofFolderWithIdentifier:(id)a2 error:(id *)a3;
- (void)overwriteShortcutsAndFolders:(id)a0 folders:(id)a1;
- (void)prependShortcutWithId:(id)a0;
- (BOOL)removeShortcutWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeShortcutWithIdentifier:(id)a0 fromCollectionWithIdentifier:(id)a1 error:(id *)a2;
- (BOOL)setShortcutOrdering:(id)a0 forCollectionIdentifier:(id)a1 error:(id *)a2;
- (BOOL)setShortcutOrdering:(id)a0 forFolderIdentifier:(id)a1 error:(id *)a2;
- (id)shortcutIdentifiersWithQuery:(id)a0 error:(id *)a1;
- (id)shortcutsInFolderWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)tombstoneFolderWithIdentifier:(id)a0 error:(id *)a1;
- (id)updateFolderWithIdentifier:(id)a0 newName:(id)a1 newIcon:(unsigned short)a2 error:(id *)a3;

@end

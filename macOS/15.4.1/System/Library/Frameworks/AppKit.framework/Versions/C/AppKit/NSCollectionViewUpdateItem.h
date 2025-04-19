@class NSUUID, NSIndexPath;

@interface NSCollectionViewUpdateItem : NSObject <NSCopying> {
    id _gap;
    id _reserved[11];
}

@property (readonly, nonatomic, getter=_action) long long action;
@property (readonly, nonatomic, getter=_indexPath) NSIndexPath *indexPath;
@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) BOOL isAppendingSectionInsert;
@property (nonatomic, getter=_shouldReconfigure, setter=_setShouldReconfigure:) BOOL shouldReconfigure;
@property (readonly, nonatomic, getter=_isSectionOperation) BOOL isSectionOperation;
@property (retain, nonatomic, getter=_newIndexPath, setter=_setNewIndexPath:) NSIndexPath *newIndexPath;
@property (readonly) NSIndexPath *indexPathBeforeUpdate;
@property (readonly) NSIndexPath *indexPathAfterUpdate;
@property (readonly) long long updateAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)compareIndexPaths:(id)a0;
- (id)initWithAction:(long long)a0 forIndexPath:(id)a1;
- (id)initWithInitialIndexPath:(id)a0 finalIndexPath:(id)a1 updateAction:(long long)a2;
- (id)initWithOldIndexPath:(id)a0 newIndexPath:(id)a1;
- (long long)inverseCompareIndexPaths:(id)a0;
- (id)revertedUpdate;

@end

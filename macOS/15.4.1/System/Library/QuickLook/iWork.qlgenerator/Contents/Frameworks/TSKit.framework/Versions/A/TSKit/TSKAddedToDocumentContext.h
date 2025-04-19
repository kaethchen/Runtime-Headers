@class NSMutableArray;

@interface TSKAddedToDocumentContext : NSObject {
    NSMutableArray *mInsertedTableInfos;
}

+ (id)defaultContext;
+ (id)importingContextWithImporterID:(id)a0;
+ (id)unhidingContext;
+ (id)dragCopyContext;
+ (id)dragMoveContext;
+ (id)exportFootnoteContext;
+ (id)insertingPrototypeContext;
+ (id)movingContext;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)unarchivingContext;
+ (id)undoDeleteContext;
+ (id)cloningContext;
+ (id)exportMergedHeaderContext;
+ (id)migrateStylesContext;
+ (id)moveSectionContext;
+ (id)preserveParentStorageContext;
+ (id)textBoxLinkageContext;

- (void).cxx_destruct;
- (void)addDrawable:(id)a0;
- (BOOL)wasMoved;
- (id)undoContext;
- (BOOL)autoUpdateSmartFields;
- (id)importerID;
- (BOOL)invokeDOLC;
- (BOOL)matchStyle;
- (BOOL)syncChanges;
- (BOOL)wasDragMoved;
- (BOOL)wasDragOperation;
- (BOOL)wasImported;
- (BOOL)wasPasted;
- (BOOL)wasUnarchived;
- (BOOL)wasUndoDelete;
- (BOOL)wasUnhidden;
- (id)insertedTableInfos;
- (BOOL)wasMigratingStyles;
- (void)addDrawables:(id)a0;
- (void)addInsertedTableInfo:(id)a0;
- (id)addedDrawables;
- (BOOL)preserveChangeTracking;
- (BOOL)preserveParentStorage;
- (BOOL)uniqueSmartFields;

@end

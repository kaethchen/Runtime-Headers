@class DirectoryEditorViewController, NSTabView;

@interface DirEditorPlugin : NSObject {
    NSTabView *_mainTabView;
}

@property DirectoryEditorViewController *dirEditorViewController;

+ (BOOL)recordTypeSupported:(id)a0;

- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (void)loadTabWithIdentifier:(id)a0 forRecords:(id)a1 ofType:(id)a2 isNewRecord:(BOOL)a3 isEditable:(BOOL)a4;
- (id)attrsNeededDuringSearch;
- (id)doPostSaveOperations;
- (id)mainTabView;
- (id)newRecordLongNameFormat;
- (id)newRecordNameFormat;
- (id)recordsAfterEditing;
- (BOOL)shouldShowRecord:(id)a0;
- (BOOL)tabWithIdentifierCanEdit:(id)a0;

@end

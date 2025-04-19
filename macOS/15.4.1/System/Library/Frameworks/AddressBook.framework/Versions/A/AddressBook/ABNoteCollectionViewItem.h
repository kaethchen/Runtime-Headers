@class ABUndoManager, NSObject;
@protocol OS_os_log, CNCancelable;

@interface ABNoteCollectionViewItem : ABCollectionViewItem {
    BOOL mHasSuspendedSuddenTermination;
    ABUndoManager *_undoManager;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<CNCancelable> deferredSaveToken;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)commitEditing;
- (void)_updateTextView:(id)a0 withValue:(id)a1;
- (void)_updateViewValue;
- (void)datumView:(id)a0 textDidChange:(id)a1;
- (void)datumViewDidBecomeFirstResponder:(id)a0;
- (void)datumViewDidEndEditing:(id)a0;
- (void)datumViewDidResignFirstResponder:(id)a0;
- (void)deferredSave;
- (void)didInsertIntoCollectionView:(id)a0;
- (void)didRemoveFromCollection:(id)a0;
- (unsigned long long)noteInsertionPoint;
- (id)noteRowView;
- (void)requestDeferredSave;
- (void)setNoteInsertionPoint:(unsigned long long)a0;
- (void)setValueEditable:(BOOL)a0;
- (BOOL)shouldDrawDivider;
- (BOOL)supportsClickToEdit;

@end

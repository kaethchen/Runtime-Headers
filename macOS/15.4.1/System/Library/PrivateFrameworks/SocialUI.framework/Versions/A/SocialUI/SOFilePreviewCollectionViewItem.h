@class NSBlockOperation;

@interface SOFilePreviewCollectionViewItem : NSCollectionViewItem {
    NSBlockOperation *_previewLoadOperation;
}

+ (id)_previewLoadOperationQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (void)_deleteSection:(id)a0;
- (void)copy:(id)a0;
- (void)mouseDown:(id)a0;
- (void)setHighlightState:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (void)_openSelection:(id)a0;
- (void)openFile;

@end

@class NSString, NSIndexPath, AMPTrackGridLockup;

@interface TrackGridDiffableDataSource : NSCollectionViewDiffableDataSource <NSCollectionViewDelegate>

@property (weak, nonatomic) AMPTrackGridLockup *owner;
@property (retain, nonatomic) NSIndexPath *lastDraggedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (void)collectionView:(id)a0 draggingSession:(id)a1 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a2 forItemsAtIndexPaths:(id)a3;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndexPath:(id)a1;

@end

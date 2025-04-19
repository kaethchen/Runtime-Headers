@class IMChatTranscriptLayoutSpecification, IMChatTranscriptLayoutEngine, NSString, NSCollectionView;
@protocol IMChatTranscriptItemVending, SONativeTranscriptViewControllerDelegate;

@interface SONativeTranscriptViewController : SOTranscriptViewController <IMChatTranscriptLayoutEngineDataSource, NSCollectionViewDataSource, SOTranscriptCollectionViewItemDelegate, IMFullScreenEffectManagerDelegate> {
    BOOL _geometryDirty;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _scrollViewInsets;
}

@property (retain, nonatomic) id<IMChatTranscriptItemVending> chatTranscriptItemProvider;
@property (weak) NSCollectionView *collectionView;
@property (retain, nonatomic) IMChatTranscriptLayoutEngine *layoutEngine;
@property (retain, nonatomic) IMChatTranscriptLayoutSpecification *layoutSpecification;
@property (weak) id<SONativeTranscriptViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSCollectionView *test_collectionView;
@property (retain, nonatomic, setter=test_setChatTranscriptItemProvider:) id<IMChatTranscriptItemVending> test_chatTranscriptItemProvider;
@property (readonly, nonatomic) IMChatTranscriptLayoutSpecification *test_layoutSpecification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)nibName;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)scrollView;
- (void)viewDidLoad;
- (long long)currentScrollPosition;
- (id)_hostView;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)endChanges;
- (id)layoutEngine:(id)a0 transcriptItemAtIndex:(unsigned long long)a1;
- (unsigned long long)numberOfTranscriptItemsForLayoutEngine:(id)a0;
- (void)_didFinishScrolling:(id)a0;
- (void)chatDisplayControllerDidChange:(id)a0;
- (void)_collectionViewFrameDidChange:(id)a0;
- (void)_createLayoutSpecificationIfNeeded;
- (void)_processLayoutEngineDrawableChanges:(id)a0;
- (void)_scrollToIndexPath:(id)a0 animated:(BOOL)a1;
- (void)_scrollToLastItemAnimated:(BOOL)a0;
- (double)distanceFromBottom;
- (BOOL)lastMessageIsVisible;
- (void)processChatItemChanges:(id)a0;
- (void)reloadDataAndScrollToEnd:(BOOL)a0;
- (void)setBottomOverlap:(double)a0;
- (void)setTopOverlap:(double)a0;
- (void)transcriptCollectionViewItemBeginLoadingMoreHistory:(id)a0;
- (void)transcriptCollectionViewItemPlayExpressiveMessageIfNeeded:(id)a0;
- (void)transcriptCollectionViewItemReplayExpressiveMessage:(id)a0;
- (void)updateAttachments;

@end

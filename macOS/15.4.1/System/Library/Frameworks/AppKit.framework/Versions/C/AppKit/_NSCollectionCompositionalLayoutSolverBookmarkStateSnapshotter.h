@class _NSCollectionSectionSolutionBookmark;

@interface _NSCollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject {
    _NSCollectionSectionSolutionBookmark *_bookmark;
}

@property (readonly, nonatomic) long long originalSectionIndex;

- (void).cxx_destruct;
- (void)applyStateToBookmark:(id)a0;
- (id)initWithBookmark:(id)a0 originalSectionIndex:(long long)a1;

@end

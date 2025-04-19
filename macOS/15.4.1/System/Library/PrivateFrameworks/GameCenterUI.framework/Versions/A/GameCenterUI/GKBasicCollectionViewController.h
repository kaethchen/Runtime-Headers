@class NSArray, GKCollectionViewDataSource;

@interface GKBasicCollectionViewController : GKCollectionViewController

@property (retain, nonatomic) NSArray *metricsForSections;
@property (retain, nonatomic) GKCollectionViewDataSource *initialDataSource;
@property (retain, nonatomic) id target;

- (void).cxx_destruct;
- (void)setDataSource:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)configureDataSource;
- (id)_gkPresentationIdentifier;
- (id)initWithDataSource:(id)a0 title:(id)a1;

@end

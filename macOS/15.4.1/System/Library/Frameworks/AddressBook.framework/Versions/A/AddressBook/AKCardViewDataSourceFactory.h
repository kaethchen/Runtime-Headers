@protocol AKCardViewDataSourceSupport;

@interface AKCardViewDataSourceFactory : NSObject

@property (weak, nonatomic) id<AKCardViewDataSourceSupport> cardView;

- (void).cxx_destruct;
- (id)dataSourceWithContact:(id)a0 contactStore:(id)a1 parentContainerCache:(id)a2 delegate:(id)a3;
- (id)initWithCardView:(id)a0;

@end

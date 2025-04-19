@class CHAutoRefineQueryItem, NSMutableArray;

@interface CHAutoRefineQuery : CHQuery

@property (readonly, copy, nonatomic) CHAutoRefineQueryItem *autoRefinedItem;
@property (readonly, copy, nonatomic) NSMutableArray *autoRefinedItems;

- (void).cxx_destruct;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;
- (BOOL)wantsAutoRefineUpdates;

@end

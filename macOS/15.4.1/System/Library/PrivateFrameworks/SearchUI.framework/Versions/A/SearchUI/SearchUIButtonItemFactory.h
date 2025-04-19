@class NSMapTable, NSMutableSet, NSDate, NSMutableArray;
@protocol SearchUIButtonItemGeneratorViewDelegate, SearchUIFeedbackDelegate;

@interface SearchUIButtonItemFactory : NSObject

@property (retain, nonatomic) NSMapTable *fetchedCommandButtonItemsForButtons;
@property (retain, nonatomic) NSMutableArray *buttonItemGenerators;
@property (retain, nonatomic) NSMutableSet *fullyGeneratedButtonItems;
@property (retain, nonatomic) NSDate *startTime;
@property (weak) id<SearchUIButtonItemGeneratorViewDelegate> delegate;
@property (weak) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property double timeLimitForSubsequentButtonGeneratorUpdates;
@property BOOL countMoreButtonTowardsMaxCount;

- (id)init;
- (void).cxx_destruct;
- (void)fetchSearchUIButtonitemsWithSFButtonItems:(id)a0 maxButtonItems:(unsigned long long)a1 shouldReverseButtonOrder:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateCompletionHandlerWithSFButtonItems:(id)a0 maxButtonItems:(unsigned long long)a1 shouldReverseButtonOrder:(BOOL)a2 completion:(id /* block */)a3;

@end

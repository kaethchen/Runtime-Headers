@protocol PLHighlightItemPromoterRule;

@interface PLHighlightItemPromoter : NSObject

@property (readonly, nonatomic) id<PLHighlightItemPromoterRule> rule;

- (void).cxx_destruct;
- (id)initWithRule:(id)a0;
- (void)processHighlightItemsInHighlightItemList:(id)a0 currentlyPromotedHighlightItems:(id)a1 withSharingConsideration:(long long)a2 resultBlock:(id /* block */)a3;

@end

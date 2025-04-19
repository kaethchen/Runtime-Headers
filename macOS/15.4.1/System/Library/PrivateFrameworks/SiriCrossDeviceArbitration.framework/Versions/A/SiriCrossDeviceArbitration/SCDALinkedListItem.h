@interface SCDALinkedListItem : NSObject

@property (readonly, nonatomic) id object;
@property (retain, nonatomic) SCDALinkedListItem *previousItem;
@property (retain, nonatomic) SCDALinkedListItem *nextItem;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)removeFromList;
- (void)insertAfterItem:(id)a0;
- (void)insertBeforeItem:(id)a0;

@end

@class NSString, ABCollectionViewItem;
@protocol ABCardCollectionViewDelegate;

@interface ABActionIgnoreSuggestedValue : NSObject <ABActionDelegate> {
    NSString *_property;
    id _value;
    id<ABCardCollectionViewDelegate> _delegate;
    ABCollectionViewItem *_item;
}

@property (readonly) NSString *actionProperty;

- (void).cxx_destruct;
- (id)unlocalizedTitle;
- (id)initWithProperty:(id)a0 value:(id)a1 delegate:(id)a2 item:(id)a3;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end

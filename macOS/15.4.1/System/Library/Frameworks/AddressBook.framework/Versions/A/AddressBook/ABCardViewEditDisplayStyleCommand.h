@protocol ABCardViewDataSourceProvider;

@interface ABCardViewEditDisplayStyleCommand : ABBookUndoableCommand

@property (readonly, nonatomic) id<ABCardViewDataSourceProvider> dataSourceProvider;
@property (readonly, nonatomic) unsigned long long oldStyle;
@property (readonly, nonatomic) unsigned long long updatedStyle;

- (void).cxx_destruct;
- (void)execute;
- (void)executeUndo;
- (id)initWithDataSourceProvider:(id)a0 oldStyle:(unsigned long long)a1 updatedStyle:(unsigned long long)a2;

@end

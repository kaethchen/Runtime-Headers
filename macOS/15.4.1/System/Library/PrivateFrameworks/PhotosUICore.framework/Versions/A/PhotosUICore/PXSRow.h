@class NSPredicate, PXSRowAction;

@interface PXSRow : PXSItem

@property (retain, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) PXSRowAction *action;
@property (copy, nonatomic) id /* block */ valueValidatator;

+ (id)rowWithTitle:(id)a0 valueKeyPath:(id)a1;

- (void).cxx_destruct;
- (id)valueValidator:(id /* block */)a0;
- (id)condition:(id)a0;
- (id)conditionFormat:(id)a0;
- (id)px_increment:(double)a0;

@end

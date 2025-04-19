@class NSTextField, NSArray, CNContactListCellViewController, ABCardCollectionView;

@interface CNContactListCellView : NSTableCellView

@property (retain) NSTextField *nameView;
@property (retain) CNContactListCellViewController *controller;
@property (retain) NSArray *customConstraints;
@property (readonly) ABCardCollectionView *collectionView;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)metrics;
- (BOOL)accessibilityPerformPress;
- (void)awakeFromNib;
- (void)updateConstraints;
- (id)views;
- (void)setName:(id)a0 emphasisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end

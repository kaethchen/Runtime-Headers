@class NSIndexSet;

@interface NSTableDragInfo : NSObject

@property (nonatomic) unsigned long long dragOperation;
@property (nonatomic) long long dropCandidateRow;
@property (nonatomic) unsigned long long tableViewDropOperation;
@property (retain, nonatomic) NSIndexSet *draggedRowIndexes;
@property (nonatomic) long long lastDropHoverRow;
@property (nonatomic) unsigned long long lastDropHoverSourceMask;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastOffscreenDropIndicatorFrame;
@property (retain, nonatomic) id dropCandidateItem;
@property (nonatomic) long long dropCandidateChildIndex;
@property (nonatomic) long long dropCandidateParentRow;

- (id)init;
- (void).cxx_destruct;

@end

@class NSIndexSet, NSMutableArray;

@interface NSTableViewDropFeedbackData : NSObject

@property long long startRow;
@property BOOL draggingAccepted;
@property BOOL isExternalDrag;
@property (retain) NSMutableArray *dropFeedbackViews;
@property (retain) NSIndexSet *draggedRowIndexes;
@property BOOL isTemporaryDrag;

- (void)dealloc;
- (id)init;

@end

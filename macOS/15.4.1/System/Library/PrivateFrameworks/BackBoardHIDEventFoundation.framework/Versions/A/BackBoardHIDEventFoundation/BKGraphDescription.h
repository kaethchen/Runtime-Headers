@class NSMutableArray, NSMutableIndexSet;
@protocol BKTranscriptTarget;

@interface BKGraphDescription : NSObject {
    NSMutableArray *_itemCountStack;
    NSMutableArray *_itemRemainingStack;
    NSMutableIndexSet *_stackIndexesHighlighted;
    id<BKTranscriptTarget> _target;
}

- (void).cxx_destruct;

@end

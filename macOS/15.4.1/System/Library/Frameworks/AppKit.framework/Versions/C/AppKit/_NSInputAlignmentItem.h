@class NSArray;
@protocol NSInputAlignmentItem;

@interface _NSInputAlignmentItem : NSObject {
    id<NSInputAlignmentItem> _item;
    NSArray *_representativeGuides;
}

- (void)dealloc;
- (void)_updateRepresentativeGuides;

@end

@class _NSInputAlignmentItem, NSArray, NSInputAlignmentFilter, NSInputAlignmentController;

@interface _NSInputAlignmentControllerSession : NSObject {
    _NSInputAlignmentItem *_item;
    NSInputAlignmentController *_controller;
    NSArray *_alignmentGuidesAffectingItem;
    NSInputAlignmentFilter *_activeFilter;
}

- (void)dealloc;
- (id)alignItemUsingFilter:(id)a0;
- (id)initWithItem:(id)a0 controller:(id)a1;
- (void)setAlignmentGuidesAffectingItem:(id)a0;

@end

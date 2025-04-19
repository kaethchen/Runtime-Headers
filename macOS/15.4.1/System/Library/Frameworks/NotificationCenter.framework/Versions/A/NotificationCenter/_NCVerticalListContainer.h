@class NSArray, NCVerticalListController, NSView, NSLayoutConstraint;

@interface _NCVerticalListContainer : _NCFlippedView

@property (weak, nonatomic) NCVerticalListController *owner;
@property (retain, nonatomic) NSLayoutConstraint *contentBottomConstraint;
@property (retain, nonatomic) NSArray *sideConstraints;
@property (retain, nonatomic) NSView *view;

- (void).cxx_destruct;
- (id)makeBackingLayer;
- (void)willRemoveSubview:(id)a0;

@end

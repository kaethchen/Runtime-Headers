@class NSSet;
@protocol PXTilingControllerCompositionObserver, PXTilingControllerCompositionInput, PXTilingControllerCompositionOutput, PXScrollController;

@interface PXTilingControllerComposition : NSObject

@property (weak, nonatomic, setter=_setScrollController:) id<PXScrollController> _scrollController;
@property (weak, nonatomic) id<PXTilingControllerCompositionObserver> observer;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSSet *tilingControllers;
@property (weak, nonatomic) id<PXTilingControllerCompositionInput> input;
@property (weak, nonatomic) id<PXTilingControllerCompositionOutput> output;

- (void).cxx_destruct;
- (void)updateComposition;
- (void)invalidateComposition;
- (void)invalidateCompositionWithContext:(id)a0;

@end

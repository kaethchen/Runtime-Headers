@class NSView, PXSelectionContainer, NSString;

@interface _PXSelectionContainerInfo : NSObject <PXSelectionContainerProvider>

@property (retain, nonatomic) PXSelectionContainer *selectionContainer;
@property (retain, nonatomic) NSView *selectionAnchorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)selectionAnchorViewForAction:(SEL)a0;

@end

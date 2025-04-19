@protocol PXPeoplePickerCollectionViewDelegate;

@interface PXPeoplePickerCollectionView : NSCollectionView

@property (nonatomic) BOOL togglesSelectionWithoutModifierKey;
@property (weak) id<PXPeoplePickerCollectionViewDelegate> delegate;

+ (id)horizontalCollectionViewWithImageLength:(double)a0;

- (void)didAddSubview:(id)a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (id)adjustedEventForEvent:(id)a0;

@end

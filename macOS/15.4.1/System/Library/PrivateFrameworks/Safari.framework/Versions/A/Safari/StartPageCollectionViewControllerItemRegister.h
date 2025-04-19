@class NSMutableDictionary;

@interface StartPageCollectionViewControllerItemRegister : NSObject {
    NSMutableDictionary *_collectionViewItemDefinitions;
    NSMutableDictionary *_supplementaryViewDefinitions;
}

- (id)init;
- (void).cxx_destruct;
- (void)registerClass:(Class)a0 forItemWithIdentifier:(id)a1;
- (void)registerClass:(Class)a0 forSupplementaryViewOfKind:(id)a1 withIdentifier:(id)a2;
- (void)_setDefinition:(id)a0 forIdentifier:(id)a1 inDictionary:(id)a2;
- (void)registerNibName:(id)a0 inBundle:(id)a1 forItemWithIdentifier:(id)a2;
- (void)registerNibName:(id)a0 inBundle:(id)a1 forSupplementaryViewOfKind:(id)a2 withIdentifier:(id)a3;
- (void)setUpReusableItemsInCollectionView:(id)a0;

@end

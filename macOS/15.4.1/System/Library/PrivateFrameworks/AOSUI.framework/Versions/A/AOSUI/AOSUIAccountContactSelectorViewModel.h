@class NSArray, NSString, NSView, NSCollectionView;
@protocol AOSUIAccountContactSelectorDelegate, AAOBWelcomeControllerModelProtocol;

@interface AOSUIAccountContactSelectorViewModel : AOSUIAccountContactBaseViewModel <NSCollectionViewDataSource, NSCollectionViewDelegate> {
    id<AAOBWelcomeControllerModelProtocol> _model;
    BOOL _shouldEnableFirstButtonOnLoad;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

@property (retain, nonatomic) NSCollectionView *collectionView;
@property (retain, nonatomic) NSArray *suggestedContacts;
@property (weak, nonatomic) id<AOSUIAccountContactSelectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setContentView:(id)a0;
- (void)collectionView:(id)a0 didDeselectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)contentView;
- (id)initWithModel:(id)a0;
- (void)_configureCollectionView;
- (void)_contactSelected:(id)a0;
- (void)_showContactPickerRelativeToItem:(id)a0;
- (void)setTemplateContentViewLayout:(long long)a0;
- (BOOL)shouldEnableFirstButtonOnLoad;
- (long long)templateContentViewLayout;

@end

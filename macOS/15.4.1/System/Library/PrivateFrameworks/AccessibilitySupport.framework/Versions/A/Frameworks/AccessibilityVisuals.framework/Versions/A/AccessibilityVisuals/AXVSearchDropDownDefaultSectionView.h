@class NSTextField, NSString, NSArray, NSObject;
@protocol AXVSearchDropDownSectionProtocol;

@interface AXVSearchDropDownDefaultSectionView : NSStackView <AXVSearchDropDownSectionViewProtocol>

@property (retain, nonatomic) NSTextField *_nameTextField;
@property (retain, nonatomic) NSString *sectionViewName;
@property (retain, nonatomic) NSArray *sectionViewItems;
@property (retain, nonatomic) NSObject<AXVSearchDropDownSectionProtocol> *sectionViewSection;
@property (retain, nonatomic) Class itemViewClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_itemViewForItem:(id)a0;
- (id)_makeSectionNameTextField;
- (void)addDropDownItemView:(id)a0;
- (id)initWithDropDownSection:(id)a0;
- (void)removeAllDropDownItemViews;
- (void)removeDropDownItemView:(id)a0;

@end

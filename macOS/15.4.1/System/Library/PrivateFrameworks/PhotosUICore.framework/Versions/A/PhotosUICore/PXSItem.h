@class NSString, NSArray, NSPredicate, PXSettings, PXSModuleController;

@interface PXSItem : NSObject <PXSettingsKeyPathObserver>

@property (retain, nonatomic) PXSettings *settings;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) id currentValue;
@property (readonly, copy) NSString *title;
@property (readonly, nonatomic) NSArray *children;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *staticTitle;
@property (copy, nonatomic) NSString *titleKeyPath;
@property (retain, nonatomic) PXSettings *titleKeyPathSettings;
@property (copy, nonatomic) NSArray *visibleChildren;
@property (retain, nonatomic) NSPredicate *condition;
@property (weak, nonatomic) PXSItem *parent;
@property (retain, nonatomic) id modelObject;
@property (copy, nonatomic) NSString *valueKeyPath;
@property (weak, nonatomic) PXSModuleController *moduleController;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) NSArray *searchableStrings;
@property (readonly, nonatomic) NSString *nameViewReuseIdentifier;
@property (readonly, nonatomic) NSString *valueViewReuseIdentifier;
@property (readonly, nonatomic) NSString *cellViewReuseIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepare;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (id)createValueView;
- (void)updateNameView:(id)a0;
- (void)_updateCurrentValue;
- (id)createCellView;
- (id)createNameView;
- (id)initWithTitle:(id)a0 children:(id)a1;
- (void)prepareNameViewForReuse:(id)a0;
- (void)prepareValueViewForReuse:(id)a0;
- (void)restoreDefaultValue;
- (void)updateValueView:(id)a0;

@end

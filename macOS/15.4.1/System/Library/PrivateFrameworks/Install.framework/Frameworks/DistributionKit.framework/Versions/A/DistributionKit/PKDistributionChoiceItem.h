@class NSObject, NSString, NSMutableDictionary, PKProduct, PKDistributionValueNode, PKDistributionChoice, PKDistributionEvaluator, NSNumber, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PKDistributionChoiceItem : NSObject {
    PKDistributionChoice *_choice;
    NSMutableArray *_childItems;
    PKDistributionChoiceItem *_parentNode;
    PKDistributionEvaluator *_evaluator;
    PKDistributionValueNode *_selectedNode;
    PKDistributionValueNode *_visibleNode;
    PKDistributionValueNode *_enabledNode;
    NSMutableDictionary *_pkgRefActiveNodes;
    NSObject<OS_dispatch_queue> *_pkgRefActiveQueue;
    PKDistributionValueNode *_startSelectedNode;
    PKDistributionValueNode *_startVisibleNode;
    PKDistributionValueNode *_startEnabledNode;
    BOOL _isPkgRefDirty;
    PKProduct *_product;
}

@property BOOL visible;
@property BOOL enabled;
@property long long state;
@property (copy) NSString *customLocation;
@property (copy) NSString *displayName;
@property (copy) NSString *displayVersion;
@property (copy) NSString *displayDescription;
@property (readonly) NSNumber *installSizeNumber;
@property (retain) NSString *tooltip;
@property (readonly) BOOL startSelected;

+ (id)keyPathsForValuesAffectingButtonCellValue;
+ (id)keyPathsForValuesAffectingInstallSizeNumber;
+ (id)keyPathsForValuesAffectingPackageReferencesToInstall;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)valueForUndefinedKey:(id)a0;
- (id)children;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)choice;
- (id)packageReferencesToInstall;
- (void)_addChild:(id)a0;
- (id)_activePackageReferences;
- (id)visibleChildren;
- (id)buttonCellValue;
- (void)_distributionControllerDidLoadChoices;
- (void)_evaluatorDidBecomeQuiescent:(id)a0;
- (id)_initWithDistributionChoice:(id)a0 evaluator:(id)a1 product:(id)a2;
- (id)_packageReferencesToInstall:(BOOL)a0;
- (id)_parentItem;
- (void)_propagateStateChange;
- (void)_restoreInitialState;
- (void)_setInitialDisplayProperties;
- (void)_setItemState:(long long)a0;
- (void)_setNode:(id *)a0 forAttribute:(id)a1 initialNode:(id *)a2 forStartAttribute:(id)a3;
- (id)packageReferencesToInstallIgnoringChildren;
- (void)setButtonCellValue:(id)a0;

@end

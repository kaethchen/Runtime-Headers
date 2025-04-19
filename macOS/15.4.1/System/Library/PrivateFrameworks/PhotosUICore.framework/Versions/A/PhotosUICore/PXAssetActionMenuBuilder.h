@interface PXAssetActionMenuBuilder : NSObject

+ (id)_actionTypesGroupedBySectionForActionManager:(id)a0 excludedActionTypes:(id)a1;
+ (id)_internalActionTypesForActionManager:(id)a0;
+ (id)pxMenuElementsForActionManager:(id)a0 excludedActionTypes:(id)a1 handler:(id /* block */)a2;

@end

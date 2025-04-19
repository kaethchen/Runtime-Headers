@class NSString, NSArray, NSColor, NSObject, NSImage, NSMutableArray, NSNumber;
@protocol OS_dispatch_queue;

@interface SMCustomizeTreeNode_Client : NSObject

@property BOOL selectedItemsStillSizing;
@property (retain) NSMutableArray *childNodes;
@property (retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) BOOL isLeaf;
@property BOOL sizeIsAvailable;
@property (readonly) BOOL preliminarySizeIsAvailable;
@property (readonly) NSColor *sizeTextColor;
@property (retain) NSColor *overrideSizeTextColor;
@property (readonly, weak) NSArray *childNodesCopy;
@property (copy) NSString *name;
@property (retain) NSColor *nameTextColor;
@property (copy) NSString *extraInfo;
@property BOOL displaysExtraInfo;
@property (copy) NSNumber *size;
@property (copy) NSNumber *localNodeSize;
@property long long userSelected;
@property BOOL performingSelectionUpdates;
@property BOOL userEditable;
@property BOOL canSelectOnlyParent;
@property BOOL accountForLocalNodeSize;
@property BOOL allowMixedStateWhenAllChildrenSelected;
@property BOOL selectWhenParentHasMixedState;
@property BOOL selectionDisabled;
@property BOOL enabled;
@property BOOL needsAttention;
@property unsigned long long textMode;
@property unsigned long long type;
@property (retain) NSImage *image;
@property (retain) SMCustomizeTreeNode_Client *parent;
@property (retain) id representedObject;

+ (id)keyPathsForValuesAffectingChildNodesCopy;
+ (id)keyPathsForValuesAffectingPreliminarySizeIsAvailable;
+ (id)keyPathsForValuesAffectingSizeTextColor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeChild:(id)a0;
- (void)evaluateState;
- (void)addChild:(id)a0 andEvaluateState:(BOOL)a1;
- (void)changeSelectedStateOfAllChildrenTo:(long long)a0;
- (id)childWithRepresentedObject:(id)a0;
- (void)evaluateSize;
- (id)initWithName:(id)a0 ofType:(unsigned long long)a1 selected:(BOOL)a2 image:(id)a3 size:(id)a4 andRepresentedObject:(id)a5;
- (long long)nodeStateBasedOnChildren;
- (void)removeAllChildren;
- (void)sortChildernUsingComparator:(id /* block */)a0;

@end

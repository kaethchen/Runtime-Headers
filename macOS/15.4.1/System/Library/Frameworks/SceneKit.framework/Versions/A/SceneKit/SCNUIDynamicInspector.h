@class NSString, SCNUIArrayEditor, NSPathControl, NSObjectController, NSMutableArray;

@interface SCNUIDynamicInspector : NSView {
    id _instance;
    NSString *_modelPath;
    NSMutableArray *_modelPathComponents;
    NSMutableArray *_stack;
    SCNUIArrayEditor *_pendingAllocationListener;
}

@property (retain) id instance;
@property (weak, nonatomic) NSObjectController *objectController;
@property (retain, nonatomic) NSPathControl *stackControl;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)clear;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (id)addUIForStringProperty:(id)a0 ofClass:(Class)a1;
- (id)addUIForArrayProperty:(id)a0 ofClass:(id)a1;
- (id)addUIForBoolProperty:(id)a0;
- (id)addUIForColorProperty:(id)a0;
- (id)addUIForContentsProperty:(id)a0;
- (id)addUIForFloatProperty:(id)a0 ofClass:(Class)a1;
- (id)addUIForImageProperty:(id)a0;
- (id)addUIForIntProperty:(id)a0 ofClass:(Class)a1;
- (id)addUIForMat4Property:(id)a0;
- (id)addUIForObjectProperty:(id)a0;
- (id)addUIForProperty:(id)a0 ofClass:(Class)a1 instance:(id)a2;
- (id)addUIForVec2Property:(id)a0;
- (id)addUIForVec3Property:(id)a0;
- (id)addUIForVec4Property:(id)a0;
- (id)allocationMenuForClass:(Class)a0 propertyName:(id)a1;
- (void)array:(id)a0 didSelect:(id)a1 atIndex:(unsigned long long)a2;
- (void)colorChanged:(id)a0;
- (void)constantPopupChanged:(id)a0;
- (void)contentsChanged:(id)a0;
- (void)instanceDidChange;
- (void)instanceNewElementInArray:(id)a0 withPropertyName:(id)a1;
- (void)instanceWillChange;
- (id)menuItemForInstance:(id)a0 propertyName:(id)a1;
- (void)newInstanceMenuClicked:(id)a0;
- (void)objectHandleClicked:(id)a0;
- (void)pathControlClicked:(id)a0;
- (id)pathControlItemForInstance:(id)a0;
- (void)popupChanged:(id)a0;
- (void)removeObjectClicked:(id)a0;
- (void)selectInstance:(id)a0 propertyName:(id)a1;
- (void)stackSelectionChanged:(id)a0;
- (void)unbind;
- (void)updateStackControl;

@end

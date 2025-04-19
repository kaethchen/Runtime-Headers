@class NSArray, UIWindow, NSString;

@interface _UINSDragSessionProxy : NSObject <UIDragSession>

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) id localContext;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL allowsMoveOperation;
@property (readonly, nonatomic, getter=isRestrictedToDraggingApplication) BOOL restrictedToDraggingApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (BOOL)canLoadObjectsOfClass:(Class)a0;
- (BOOL)hasItemsConformingToTypeIdentifiers:(id)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 inWindow:(id)a1;

@end

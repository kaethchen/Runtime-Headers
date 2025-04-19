@class NSString;

@interface CoreDragImageWrapper : NSObject {
    id _object;
}

@property (readonly) id image;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } originalFrame;
@property (readonly) NSString *key;
@property (readonly) unsigned int slotID;
@property (readonly) unsigned int flags;
@property (readonly) unsigned int fadeEdges;

- (void).cxx_destruct;
- (BOOL)hasCASlotProxy;
- (id)initWithImageComponent:(id)a0;

@end

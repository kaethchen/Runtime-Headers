@class NSString;

@interface CDImageComponent : NSObject

@property unsigned int fadeEdges;
@property (readonly) id image;
@property (readonly) id layerSafeContents;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (retain) NSString *key;
@property unsigned int slotID;
@property (readonly) unsigned int flags;

+ (id)imageComponentWithImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 key:(id)a2;

- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(struct __CFDictionary { } *)a0;
- (void)deleteSlotForCAContext:(id)a0;
- (id)dictionaryRepresentationInCAContext:(id)a0;
- (BOOL)hasCASlotProxy;
- (id)initWithImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 key:(id)a2;

@end

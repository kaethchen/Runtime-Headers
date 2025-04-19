@class NSArray;

@interface CDImageData : NSObject {
    struct CGSize { double width; double height; } _originalSize;
    NSArray *_imageComponents;
    id /* block */ _imageComponentsBlock;
}

@property unsigned int pasteboardIndex;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenFrame;
@property (retain) NSArray *imageComponents;
@property (copy) id /* block */ imageComponentsBlock;
@property (readonly) unsigned int flags;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)componentAtIndex:(long long)a0;
- (struct __CFDictionary { } *)createDictionaryRepresentationInCAContext:(id)a0;
- (void)deleteSlotsForCAContext:(id)a0;
- (BOOL)hasCalledInComponents;
- (id /* block */)imageComponentsAsBlock;
- (id)initWithDict:(struct __CFDictionary { } *)a0;
- (void)resetScaledSourceDragComponentsWithCursorOffest:(struct CGPoint { double x0; double x1; })a0;
- (void)scaleSourceDragComponentsToMeetHISpecWithCursorOffest:(struct CGPoint { double x0; double x1; })a0;

@end

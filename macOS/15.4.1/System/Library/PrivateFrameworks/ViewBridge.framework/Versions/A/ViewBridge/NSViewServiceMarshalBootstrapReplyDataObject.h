@class NSArray;

@interface NSViewServiceMarshalBootstrapReplyDataObject : NSObject {
    struct { BOOL controllerAllowsSnapshot; BOOL controllerIsMarzipan; unsigned int caContextID; unsigned int serviceConnectionID; unsigned long long flags; long long windowLevel; unsigned long long windowStyleMask; struct CGSize { double width; double height; } windowContentMinSize; struct CGSize { double width; double height; } windowContentMaxSize; struct CGSize { double width; double height; } windowFrameMinSize; struct CGSize { double width; double height; } windowFrameMaxSize; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } serviceViewFrame; NSArray *touchBarsDescription; } replyData;
}

@end

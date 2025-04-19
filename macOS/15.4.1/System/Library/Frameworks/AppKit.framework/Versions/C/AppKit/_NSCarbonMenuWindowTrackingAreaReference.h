@interface _NSCarbonMenuWindowTrackingAreaReference : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
    void *userData;
    struct OpaqueHIViewTrackingAreaRef { } *trackingRef;
    long long trackingNum;
    struct { unsigned char inside : 1; unsigned char enabledDuringMouseDrag : 1; unsigned char isCursorRect : 1; unsigned int reserved : 29; } f;
}

@end

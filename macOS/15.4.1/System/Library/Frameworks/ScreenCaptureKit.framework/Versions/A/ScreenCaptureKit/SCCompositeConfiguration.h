@class NSString;

@interface SCCompositeConfiguration : NSObject {
    NSString *_cameraDeviceID;
    long long _compositeMode;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _newsroomRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _floatingRect;
    long long _newsroomPosition;
}

@property (readonly) long long compositeMode;
@property (readonly) NSString *cameraDeviceID;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } floatingRect;
@property (readonly) long long newsroomPosition;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } newsroomCompositionRect;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)serialize;
- (id)initWithCameraID:(id)a0 floatingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithCameraID:(id)a0 newsroomPosition:(long long)a1;
- (id)initWithMode:(long long)a0 withCameraID:(id)a1 newsroomPosition:(long long)a2 floatingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithMode:(long long)a0 withCameraID:(id)a1 newsroomRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end

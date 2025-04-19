@class NSUUID, NSString, NSArray, UIObjectCompat;

@interface UIObject : NSObject

@property (readonly) UIObjectCompat *underlyingObject;
@property (readonly) NSUUID *uuid;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly, nonatomic) NSString *elementDetectionLabel;
@property (readonly, nonatomic) NSString *elementDetectionText;
@property (readonly, nonatomic) float elementDetectionConfidence;
@property (readonly, nonatomic) NSString *iconDetectionLabel;
@property (readonly, nonatomic) float iconDetectionConfidence;
@property (readonly, nonatomic) BOOL clickabilityDetection;
@property (readonly, nonatomic) float clickabilityConfidence;
@property (readonly, nonatomic) BOOL focusDetection;
@property (readonly, nonatomic) float focusConfidence;
@property (readonly, nonatomic) NSArray *children;

- (void).cxx_destruct;
- (id)initWithCompat:(id)a0;
- (id)init:(long long)a0 confidence:(double)a1 text:(id)a2 boundingBox:(id)a3 children:(id)a4 clickable:(BOOL)a5 focused:(BOOL)a6;

@end

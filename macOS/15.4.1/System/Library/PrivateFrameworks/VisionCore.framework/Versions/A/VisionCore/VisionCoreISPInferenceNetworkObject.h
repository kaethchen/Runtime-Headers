@interface VisionCoreISPInferenceNetworkObject : NSObject

@property (readonly, nonatomic) unsigned long long groupID;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) unsigned long long confidence;

- (id)initWithANSTObject:(id)a0;

@end

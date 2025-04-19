@class NSString, MCAssetVideo;

@interface MCSlideAsset : NSObject {
    struct CGPoint { double x; double y; } center;
    double scale;
    double rotation;
}

@property (retain) MCAssetVideo *asset;
@property (copy) NSString *kenBurnsType;

- (void)dealloc;
- (id)description;
- (id)init;

@end

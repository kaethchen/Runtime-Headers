@class AVURLAsset, NSArray, AVAssetImageGenerator;

@interface AVThumbnailGenerationRequest : NSObject

@property (retain) AVURLAsset *asset;
@property double startTime;
@property double duration;
@property (retain) NSArray *thumbnailTimes;
@property double tolerance;
@property struct CGSize { double width; double height; } size;
@property long long requestType;
@property (copy) id /* block */ thumbnailHandler;
@property (retain) AVAssetImageGenerator *assetImageGenerator;

- (void).cxx_destruct;

@end

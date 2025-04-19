@class NSURL, AVAsset, AVAssetTrack;

@interface ICAttachmentAudioModelCompositionInfo : NSObject

@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAssetTrack *track;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 asset:(id)a1;

@end

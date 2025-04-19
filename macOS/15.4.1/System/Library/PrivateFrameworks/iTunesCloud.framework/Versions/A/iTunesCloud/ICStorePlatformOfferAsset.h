@class NSURL, NSDictionary;

@interface ICStorePlatformOfferAsset : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double previewDuration;
@property (readonly, copy, nonatomic) NSURL *previewURL;
@property (readonly, nonatomic) long long size;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0;

@end

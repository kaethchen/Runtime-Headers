@class ILMediaObject, NSString, NSMutableDictionary, AVAsset, NSError;

@interface ILMediaBrowserImageManagerLoadAttributesRequest : NSObject

@property (retain) NSString *path;
@property (retain) ILMediaObject *mediaObject;
@property (retain) NSMutableDictionary *cacheInfo;
@property (retain) AVAsset *asset;
@property (retain) NSError *error;
@property BOOL doneWithMovieLoading;

- (void)dealloc;
- (id)init;

@end

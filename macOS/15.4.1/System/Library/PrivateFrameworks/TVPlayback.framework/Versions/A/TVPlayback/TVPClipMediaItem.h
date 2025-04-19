@class NSSet, NSMutableDictionary, NSObject, TVPTimeRange;
@protocol TVPMediaItem;

@interface TVPClipMediaItem : NSObject

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) NSSet *localMetadataKeys;
@property (retain, nonatomic) NSMutableDictionary *localMetadata;
@property (readonly, nonatomic) TVPTimeRange *clipTimeRange;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)_mediaItemMetadataWillOrDidChange:(id)a0;
- (BOOL)hasTrait:(id)a0;
- (id)initWithMediaItem:(id)a0 clipTimeRange:(id)a1;
- (id)mediaItemMetadataForProperty:(id)a0;
- (void)setMediaItemMetadata:(id)a0 forProperty:(id)a1;

@end

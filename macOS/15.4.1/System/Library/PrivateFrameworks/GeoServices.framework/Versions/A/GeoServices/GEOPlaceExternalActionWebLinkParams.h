@class NSString, NSURL, GEOPDWebLinkParams;
@protocol GEOMapItemPhoto;

@interface GEOPlaceExternalActionWebLinkParams : NSObject {
    GEOPDWebLinkParams *_params;
    NSURL *_url;
    id<GEOMapItemPhoto> _photo;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) id<GEOMapItemPhoto> icon;
@property (readonly, nonatomic) BOOL supportsEmbeddedWebBrowser;

- (void).cxx_destruct;
- (id)initWithWebLinkParams:(id)a0;

@end

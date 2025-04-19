@class GEOAttributionApp, GEOPlaceExternalActionLinkExtensionParams, GEOQuickLink, GEOPlaceExternalActionWebLinkParams, GEOPlaceExternalActionLinkAppClipParams, GEOPDLink, GEOPlaceExternalActionLinkQuickLinkParams, NSMapTable;

@interface GEOPlaceExternalActionLink : NSObject {
    GEOPDLink *_actionLink;
    NSMapTable *_attributionMap;
}

@property (readonly, nonatomic) GEOQuickLink *quickLink;
@property (readonly, nonatomic) GEOQuickLink *appClipRepresentedAsQuickLink;
@property (readonly, nonatomic) GEOAttributionApp *attributionAppForMapsExtension;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) GEOPlaceExternalActionLinkQuickLinkParams *quickLinkParams;
@property (readonly, nonatomic) GEOPlaceExternalActionLinkAppClipParams *appClipParams;
@property (readonly, nonatomic) GEOPlaceExternalActionLinkExtensionParams *siriExtensionParams;
@property (readonly, nonatomic) GEOPlaceExternalActionWebLinkParams *webLinkParams;

- (void).cxx_destruct;
- (id)appClipUsingArtworkURL:(id)a0 title:(id)a1;
- (id)initWithLinkData:(id)a0 attributionMap:(id)a1;

@end

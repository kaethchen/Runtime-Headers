@class NSString;
@protocol GEOMapItemPhoto;

@interface GEOTooltip : NSObject {
    int _customRouteType;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *actionLink;
@property (readonly, nonatomic) id<GEOMapItemPhoto> photo;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) BOOL usesOriginMapItem;

- (void).cxx_destruct;
- (id)initWithPDTooltip:(id)a0;

@end

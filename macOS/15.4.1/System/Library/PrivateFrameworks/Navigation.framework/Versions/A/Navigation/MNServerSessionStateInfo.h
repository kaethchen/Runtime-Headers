@class NSUUID, NSDictionary, NSData, NSMutableDictionary;

@interface MNServerSessionStateInfo : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_displayedTrafficBanners;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *sessionState;
@property (readonly, nonatomic) NSUUID *uniqueRouteID;
@property (readonly, nonatomic) NSDictionary *displayedTrafficBanners;
@property (readonly, nonatomic) NSData *directionsResponseID;
@property (readonly, nonatomic) NSData *etauResponseID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addDisplayedBannerID:(id)a0 withEventInfo:(id)a1;
- (void)updateWithETAUResponse:(id)a0;
- (void)updateWithRoute:(id)a0;
- (void)updateWithSessionState:(id)a0;

@end

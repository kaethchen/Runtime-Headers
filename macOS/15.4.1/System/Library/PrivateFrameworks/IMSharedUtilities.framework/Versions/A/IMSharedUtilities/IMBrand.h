@class NSString, MKMapItem, NSData;

@interface IMBrand : NSObject

@property (readonly, retain, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) NSString *brandURI;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *primaryPhoneNumber;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;
@property (readonly, nonatomic) NSString *localizedResponseTime;
@property (readonly, nonatomic) NSData *logoFingerprint;

+ (id)brandWithMKMapItem:(id)a0 brandURI:(id)a1;
+ (id)placeholderNameForBrandURI:(id)a0;

- (void)dealloc;
- (id)_init;
- (void)_setMapItem:(id)a0;
- (void)clearCachedAssets:(id /* block */)a0;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end

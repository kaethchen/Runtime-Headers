@class NSArray, NSString, NSImage;
@protocol _MKPlaceReservationDelegate;

@interface _MKPlaceReservationInfo : NSObject

@property (readonly, copy, nonatomic) NSArray *openTimes;
@property (readonly, copy, nonatomic) NSString *attributionProviderDisplayName;
@property (readonly, nonatomic) NSImage *attributionProviderLogoImage;
@property (readonly, weak, nonatomic) id<_MKPlaceReservationDelegate> reservationDelegate;

- (void).cxx_destruct;
- (id)initWithOpenTimes:(id)a0 attributionProviderName:(id)a1 providerLogoImage:(id)a2 delegate:(id)a3;

@end

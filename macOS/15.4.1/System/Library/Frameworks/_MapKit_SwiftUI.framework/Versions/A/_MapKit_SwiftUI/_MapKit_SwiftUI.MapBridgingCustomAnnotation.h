@class NSString, MKMapItem;

@interface _MapKit_SwiftUI.MapBridgingCustomAnnotation : NSObject <MKAnnotation, MKMapItemRepresenting> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ mapItem;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) void /* unknown type, empty encoding */ coordinate;
@property (nonatomic, readonly) MKMapItem *representedMapItem;

- (id)init;
- (void).cxx_destruct;
- (id)_representedMapItem;

@end

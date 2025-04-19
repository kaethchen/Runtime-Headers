@class NSString, NSColor, MKMapItem;

@interface MUCoordinateViewModel : MUFactoidViewModel <MUFactoidViewModel> {
    MKMapItem *_mapItem;
    BOOL _isUserLocation;
}

@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSColor *symbolColor;
@property (readonly, nonatomic) NSColor *darkSymbolColor;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *valueString;
@property (readonly, nonatomic) BOOL shouldReverseForRTLLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0 isUserLocation:(BOOL)a1;

@end

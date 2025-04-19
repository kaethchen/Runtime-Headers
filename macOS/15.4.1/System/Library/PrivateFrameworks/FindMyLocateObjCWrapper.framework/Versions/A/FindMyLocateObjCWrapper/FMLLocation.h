@class FMLPlaceMark, NSArray, NSString;

@interface FMLLocation : NSObject

@property (retain) FMLPlaceMark *address;
@property double altitude;
@property double longitude;
@property double speed;
@property int floorLevel;
@property double horizontalAccuracy;
@property (copy) NSArray *labels;
@property double latitude;
@property double timestamp;
@property double verticalAccuracy;
@property long long locationType;
@property (copy) NSString *coarseAddressLabel;
@property (readonly) long long type;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 altitude:(double)a1 longitude:(double)a2 speed:(double)a3 floorLevel:(int)a4 horizontalAccuracy:(double)a5 labels:(id)a6 latitude:(double)a7 timestamp:(double)a8 verticalAccuracy:(double)a9 locationType:(long long)a10 coarseAddressLabel:(id)a11;
- (id)locationTypeDescription;

@end

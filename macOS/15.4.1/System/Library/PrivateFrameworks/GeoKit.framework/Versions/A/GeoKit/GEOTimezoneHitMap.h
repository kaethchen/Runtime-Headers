@class NSData, NSArray, NSDictionary;

@interface GEOTimezoneHitMap : NSObject {
    BOOL isLoaded;
    NSData *hitMap;
    unsigned int width;
    unsigned int height;
    NSArray *areas;
    NSDictionary *areasToTimeZones;
}

+ (id)fileNameForTimeZone:(id)a0;
+ (id)sharedTimezoneHitMap;

- (void)dealloc;
- (BOOL)loadIfNeeded;
- (id)_areaLabelAtLongitude:(double)a0 latitude:(double)a1;
- (struct CGImage { } *)copyTimeZoneForAreaWithName:(id)a0;
- (id)fileNameAtLongitude:(double)a0 latitude:(double)a1;
- (BOOL)loadHitMapData;
- (BOOL)loadMetaDictionary;
- (id)timeZoneNamesAtLongitude:(double)a0 latitude:(double)a1;

@end

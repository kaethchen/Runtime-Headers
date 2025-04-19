@class GEOGloriaDB;

@interface GEOMetroRegionData : NSObject {
    GEOGloriaDB *_db;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (id)metroNameForLocation:(id)a0;

@end

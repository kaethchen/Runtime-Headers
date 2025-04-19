@class NSString, NSDate;

@interface GEOLocationShiftingCacheItem : NSObject <GEOXPCSerializable>

@property (retain, nonatomic) NSDate *addDate;
@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (nonatomic) double radiusMeters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;

@end

@class VCDataMLEnhance, NSMutableDictionary;

@interface DownlinkParticipantStats : NSObject

@property (readonly) NSMutableDictionary *streamGroupStats;
@property (readonly) VCDataMLEnhance *mlEnhance;

- (void)dealloc;
- (id)initWithThermalLevel:(int)a0 andTime:(double)a1;
- (id)initWithThermalLevel:(int)a0 andTime:(double)a1 useMLEnhance:(BOOL)a2;
- (id)statsForStreamGroup:(id)a0;

@end

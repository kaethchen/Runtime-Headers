@class NSString, RegionStats, NSMutableArray, TPCSignatureObject;

@interface InspectedSignatureObject : NSObject

@property (retain, nonatomic) TPCSignatureObject *obj;
@property (nonatomic) unsigned long long total_1P_to_3P_boundary_matches;
@property (nonatomic) unsigned long long total_last_contiguous_1P_to_3P_boundary_matches;
@property (nonatomic) unsigned long long total_3P_frame_matches;
@property (nonatomic) unsigned long long total_last_contiguous_3P_frame_matches;
@property (nonatomic) BOOL lowest_3P_frame_seen;
@property (nonatomic) BOOL has_trigger_frame;
@property (nonatomic) BOOL direct_wal_checkpoint_invocation;
@property (nonatomic) unsigned long long special_frame;
@property (nonatomic) BOOL sqlite_usage;
@property (nonatomic) unsigned long long log_number;
@property (nonatomic) long long matchStartOffsetFromLast3PFrame;
@property (copy, nonatomic) NSString *last3PFrame;
@property (retain, nonatomic) NSMutableArray *regionsArray;
@property (retain, nonatomic) RegionStats *currentRegion;

- (id)init;
- (void).cxx_destruct;
- (void)updateRegionStats:(long long)a0 distance:(long long)a1 region:(BOOL)a2;
- (void)updateUnhandledFrameStats:(long long)a0;

@end

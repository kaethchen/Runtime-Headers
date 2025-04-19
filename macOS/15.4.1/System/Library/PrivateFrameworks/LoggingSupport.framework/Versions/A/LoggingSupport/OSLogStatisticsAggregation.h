@class NSString, NSMutableDictionary, NSUUID, NSNumber;

@interface OSLogStatisticsAggregation : NSObject

@property (nonatomic) unsigned long long eventCount;
@property (nonatomic) unsigned long long eventBytes;
@property (readonly, nonatomic) NSMutableDictionary *labelToChildTiers;
@property (readonly, nonatomic) unsigned char tier;
@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic) NSString *tierString;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUUID *senderUUID;
@property (readonly, nonatomic) NSNumber *senderOffset;

+ (id)_stringForTier:(unsigned char)a0;
+ (id)_labelFromProxy:(id)a0 forTier:(unsigned char)a1;

- (void).cxx_destruct;
- (void)_addToChildren:(id)a0;
- (void)_addTraceEvent:(id)a0;
- (unsigned char)_childTier;
- (id)_descendingChildren;
- (id)_descriptionTierCap:(unsigned char)a0 withDepth:(unsigned long long)a1;
- (id)_dictRepresentation:(unsigned char)a0;
- (id)_tracePointSizeString;
- (id)aggregationForTier:(unsigned char)a0 withLabel:(id)a1;
- (id)aggregationsForTier:(unsigned char)a0;
- (id)descriptionWithTierCap:(unsigned char)a0;
- (id)initWithLabel:(id)a0 tier:(unsigned char)a1;
- (id)initWithOSLogProxy:(id)a0 tier:(unsigned char)a1;
- (id)jsonDescription:(unsigned long long)a0;
- (id)jsonDescription:(unsigned long long)a0 tierCap:(unsigned char)a1;

@end

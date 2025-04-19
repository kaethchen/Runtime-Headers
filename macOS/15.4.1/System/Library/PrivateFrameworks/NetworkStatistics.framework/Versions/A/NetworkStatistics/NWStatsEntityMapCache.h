@class NSMutableDictionary;

@interface NWStatsEntityMapCache : NSObject {
    NSMutableDictionary *_uuidMap;
}

@property double hitRetainTime;
@property double missRetainTime;
@property unsigned int capacityLimit;
@property unsigned int pruneSize;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)stateDictionary;
- (id)entryForUUID:(id)a0;
- (void)pruneCache;
- (void)setEntry:(id)a0 forUUID:(id)a1;

@end

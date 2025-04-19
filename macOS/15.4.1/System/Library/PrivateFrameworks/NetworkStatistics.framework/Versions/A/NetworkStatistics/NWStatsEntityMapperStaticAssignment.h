@class NSMutableDictionary;

@interface NWStatsEntityMapperStaticAssignment : NWStatsEntityMapper {
    NSMutableDictionary *_staticUUIDToBundleIDMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;

@end

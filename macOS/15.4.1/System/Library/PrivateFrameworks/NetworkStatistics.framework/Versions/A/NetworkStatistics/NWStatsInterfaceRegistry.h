@class NSMutableSet, NSMutableDictionary;

@interface NWStatsInterfaceRegistry : NSObject {
    NSMutableSet *_neQueriedInterfaceIndexes;
    NSMutableDictionary *_machOUUIDLookups;
    NSMutableDictionary *_interfaceByteAccumulators;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)getState;
- (void)addInterfaceIndexToRegistry:(unsigned int)a0;
- (void)addVPNBytesForInterfaceIndex:(unsigned int)a0 fromSnapshot:(id)a1;
- (BOOL)isTrackingInterfaceIndex:(unsigned int)a0;
- (BOOL)machOUUIDBelongsToVPNProvider:(id)a0;
- (void)subtractVPNBytesForVPNProviderAppUUID:(id)a0 fromSnapshot:(id)a1;

@end

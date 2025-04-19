@class NSMutableDictionary, CCDatabaseDeviceMapping, NSNumber, CCDatabaseDeviceClockValues;

@interface CCDatabaseSetStateVectorBuilder : NSObject {
    CCDatabaseDeviceMapping *_deviceMapping;
    BOOL _missingAtomsImplied;
    NSMutableDictionary *_allDeviceClockValues;
    NSNumber *_lastDeviceRowId;
    CCDatabaseDeviceClockValues *_deviceClockValues;
}

+ (void)removeSiteIdentifiers:(id)a0 fromStateVector:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)build;
- (id)_indexSetForAtomState:(unsigned char)a0 deviceRowId:(id)a1 maxIndex:(unsigned long long)a2;
- (void)addClockValue:(unsigned long long)a0 withAtomState:(unsigned char)a1 forDeviceRowId:(id)a2;
- (void)addClockValueRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAtomState:(unsigned char)a1 forDeviceRowId:(id)a2;
- (void)addClockValueSet:(id)a0 withAtomState:(unsigned char)a1 forDeviceRowId:(id)a2;
- (id)initWithDeviceMapping:(id)a0 missingAtomsImplied:(BOOL)a1;

@end

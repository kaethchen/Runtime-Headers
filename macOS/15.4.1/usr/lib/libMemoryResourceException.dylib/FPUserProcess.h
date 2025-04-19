@class FPMemoryRegion, NSMutableArray, NSMutableDictionary;

@interface FPUserProcess : FPProcess {
    unsigned long long _ledgers[4];
    NSMutableArray *_images;
    NSMutableDictionary *_ownedVmObjects;
    unsigned long long _cachedDispositionAddress;
    int _cachedDisposition;
    FPMemoryRegion *_pendingUnusedSharedRegion;
    BOOL _bailedOut;
}

@property (readonly, nonatomic) unsigned int task;
@property (readonly, nonatomic) unsigned long long physFootprint;
@property (readonly, nonatomic) BOOL doOwnedAccountingAdjustments;

+ (unsigned int)_dirtyFlagsFromEntryState:(unsigned int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)_gatherPageSize;
- (id)auxData;
- (void)_addSubrangesForRegion:(id)a0 purgeState:(int)a1;
- (BOOL)_configurePageSize;
- (void)_gatherImageData;
- (void)_gatherIsTranslated;
- (void)_gatherLedgers;
- (id)_gatherOwnedVmObjects;
- (void)_gatherPhysFootprint;
- (void)_gatherProcessState;
- (void)_gatherSharedCacheFromDyldSnapshot:(struct dyld_process_snapshot_s { } *)a0;
- (BOOL)_isAlive;
- (BOOL)_populateMemoryRegionWithPageQueries:(id)a0 regionInfo:(struct vm_region_submap_info_64 { int x0; int x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned char x11; unsigned char x12; int x13; int x14; unsigned int x15; unsigned short x16; unsigned int x17; unsigned long long x18; } *)a1;
- (BOOL)_populateTask;
- (void)_setIdleExitStatusFromDirtyFlags:(unsigned int)a0;
- (void)_setPriority:(int)a0;
- (void)addLedgerData:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)enumerateRegions:(id /* block */)a0;
- (id)extendedInfoForRegionType:(int)a0 at:(unsigned long long)a1 extendedInfoProvider:(id)a2;
- (void)gatherData:(unsigned long long)a0 extendedInfoProvider:(id)a1;
- (id)initWithBsdInfo:(struct proc_bsdinfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[32]; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned long long x20; unsigned long long x21; } *)a0;

@end

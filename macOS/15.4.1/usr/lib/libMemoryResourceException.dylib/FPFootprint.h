@class NSArray, NSString, NSMutableDictionary, FPTime, NSDictionary, NSMutableArray;

@interface FPFootprint : NSObject <FPFootprintExtendedInfoProvider> {
    NSMutableDictionary *_pidToFootprint;
    NSDictionary *_allPIDsIOSurfaceDescriptions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _allPIDsIOSurfaceDescriptionsLock;
    NSDictionary *_allPIDsIOAccelMemoryInfos;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _allPIDsIOAccelMemoryInfosLock;
    struct __CFDictionary { } *_memoryObjects;
    NSMutableDictionary *_sharedCacheMemoryObjectsTable;
    struct __CFDictionary { } *_textMemoryObjects;
    struct __CFDictionary { } *_linkeditMemoryObjects;
    NSMutableArray *_outputFormatters;
    BOOL _earlyExit;
}

@property (class, nonatomic) BOOL breakDownPhysFootprint;
@property (class, nonatomic) int vmRegionInfoFlags;
@property (class, nonatomic, getter=isSharingAnalysisDisabled) BOOL sharingAnalysisDisabled;

@property (readonly, nonatomic) NSArray *processes;
@property (nonatomic) unsigned int qualityOfService;
@property (readonly, nonatomic) FPTime *gatherStartTime;
@property (readonly, nonatomic) FPTime *gatherEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)installCancelHandler:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)addOutputFormatter:(id)a0;
- (void)analyzeData;
- (BOOL)gatherData;
- (BOOL)gatherData:(unsigned long long)a0;
- (id)initWithProcesses:(id)a0;
- (id)ioAccelMemoryInfoDetailsAtAddress:(unsigned long long)a0 for:(int)a1 error:(id *)a2;
- (id)ioSurfaceExtendedInfoDetailsAtAddress:(unsigned long long)a0 for:(int)a1;
- (void)printOutputVerbose:(BOOL)a0 summarize:(BOOL)a1 noCategories:(BOOL)a2;

@end

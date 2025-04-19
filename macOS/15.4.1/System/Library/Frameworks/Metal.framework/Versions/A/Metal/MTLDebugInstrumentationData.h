@class NSArray, __end_cap_, NSData, NSObject, __end_;
@protocol OS_dispatch_data;

@interface MTLDebugInstrumentationData : NSObject {
    NSObject<OS_dispatch_data> *_dataMap;
    const void *_data;
    struct vector<const __CFString *, std::allocator<const __CFString *>> { struct __CFString **__begin_; struct __CFString **__end_; struct __compressed_pair<const __CFString **, std::allocator<const __CFString *>> { struct __CFString **__value_; } __end_cap_; } _strings;
    struct vector<MTLDebugLocation *, std::allocator<MTLDebugLocation *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<MTLDebugLocation **, std::allocator<MTLDebugLocation *>> { id *__value_; } x1; } _debugLocations;
    struct vector<MTLDebugSubProgram *, std::allocator<MTLDebugSubProgram *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<MTLDebugSubProgram **, std::allocator<MTLDebugSubProgram *>> { id *__value_; } x1; } _debugSubPrograms;
    NSData *_globalConstantsData;
    NSObject<OS_dispatch_data> *_userReflectionData;
    NSArray *_linkedDynamicLibraries;
}

@property (readonly, nonatomic) BOOL hasGlobalConstantsInstrumentationFailures;
@property (readonly, nonatomic) BOOL hasArgumentBufferInstrumentationFailures;
@property (readonly, nonatomic) BOOL hasArgumentLimitsInstrumentationFailures;
@property (readonly, nonatomic) unsigned int threadgroupArgumentOffset;
@property (readonly, nonatomic) unsigned int activeThreadgroupMask;
@property (readonly, nonatomic) unsigned long long bufferAccessMask;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id).cxx_construct;
- (id)debugLocationForID:(unsigned int)a0;
- (id)globalConstantsData;
- (id)linkedDynamicLibraries;
- (void)releaseLinkedDynamicLibraries;
- (id)stringForID:(unsigned int)a0;
- (id)userReflectionData;
- (id)debugSubProgramForID:(unsigned int)a0;
- (id)initWithData:(id)a0 linkedDynamicLibraries:(id)a1;

@end

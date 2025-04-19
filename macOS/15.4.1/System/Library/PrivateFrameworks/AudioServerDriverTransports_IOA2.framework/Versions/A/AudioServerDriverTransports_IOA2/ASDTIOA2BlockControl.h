@class ASDTIOA2Device, NSArray, NSString;

@interface ASDTIOA2BlockControl : ASDControl <ASDTIOA2Control> {
    struct IOMemoryMap { void /* function */ **_vptr$IOMemoryMap; struct IOConnect { void /* function */ **_vptr$IOConnect; struct shared_ptr<ASDT::IOConnect::Object> { struct Object *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mMutex; BOOL mIsOpen; } mConnection; void *mAddress; unsigned int mSize; unsigned int mType; } _blockMap;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

@property (weak, nonatomic) ASDTIOA2Device *ioa2Device;
@property (nonatomic) BOOL settable;
@property (nonatomic) unsigned int userClientID;
@property (readonly, nonatomic) NSArray *propertySelectorInfo;
@property (retain, nonatomic) NSArray *properties;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;
- (void)pushValue:(unsigned int)a0;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 isSettable:(BOOL)a2 forElement:(unsigned int)a3 inScope:(unsigned int)a4 objectClassID:(unsigned int)a5;
- (BOOL)synchronizeWithRegistryDictionary:(id)a0;

@end

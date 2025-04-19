@class ASDTIOA2Device, NSArray, NSString;

@interface ASDTIOA2LevelControl : ASDLevelControl <ASDTIOA2Control> {
    struct VolumeCurve { unsigned int mTag; struct map<ASDT::RawPoint, ASDT::DBPoint, std::less<ASDT::RawPoint>, std::allocator<std::pair<const ASDT::RawPoint, ASDT::DBPoint>>> { struct __tree<std::__value_type<ASDT::RawPoint, ASDT::DBPoint>, std::__map_value_compare<ASDT::RawPoint, std::__value_type<ASDT::RawPoint, ASDT::DBPoint>, std::less<ASDT::RawPoint>>, std::allocator<std::__value_type<ASDT::RawPoint, ASDT::DBPoint>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<ASDT::RawPoint, ASDT::DBPoint>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<ASDT::RawPoint, std::__value_type<ASDT::RawPoint, ASDT::DBPoint>, std::less<ASDT::RawPoint>>> { unsigned long long __value_; } __pair3_; } __tree_; } mCurveMap; BOOL mIsApplyingTransferFunction; unsigned int mTransferFunction; float mRawToScalarExponentNumerator; float mRawToScalarExponentDenominator; } _volumeCurve;
    unsigned int _rawValue;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

@property (weak, nonatomic) ASDTIOA2Device *ioa2Device;
@property (nonatomic) unsigned int userClientID;
@property (readonly, nonatomic) NSArray *propertySelectorInfo;
@property (retain, nonatomic) NSArray *properties;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfDecibelValue;
+ (BOOL)automaticallyNotifiesObserversOfScalarValue;
+ (struct VolumeCurve { unsigned int x0; struct map<ASDT::RawPoint, ASDT::DBPoint, std::less<ASDT::RawPoint>, std::allocator<std::pair<const ASDT::RawPoint, ASDT::DBPoint>>> { struct __tree<std::__value_type<ASDT::RawPoint, ASDT::DBPoint>, std::__map_value_compare<ASDT::RawPoint, std::__value_type<ASDT::RawPoint, ASDT::DBPoint>, std::less<ASDT::RawPoint>>, std::allocator<std::__value_type<ASDT::RawPoint, ASDT::DBPoint>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<ASDT::RawPoint, ASDT::DBPoint>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<ASDT::RawPoint, std::__value_type<ASDT::RawPoint, ASDT::DBPoint>, std::less<ASDT::RawPoint>>> { unsigned long long x0; } x2; } x0; } x1; BOOL x2; unsigned int x3; float x4; float x5; })volumeCurveFromControlInfo:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (BOOL)changeDecibelValue:(float)a0;
- (BOOL)changeScalarValue:(float)a0;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (void)setDecibelValue:(float)a0;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;
- (void)pushValue:(unsigned int)a0;
- (void)doSetValue:(unsigned int)a0;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 isSettable:(BOOL)a2 forElement:(unsigned int)a3 inScope:(unsigned int)a4 objectClassID:(unsigned int)a5 dictionary:(id)a6;
- (BOOL)synchronizeWithRegistryDictionary:(id)a0;

@end

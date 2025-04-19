@class ASDTIOA2Device, NSArray, NSString;

@interface ASDTIOA2BooleanControl : ASDBooleanControl <ASDTIOA2Control> {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

@property (weak, nonatomic) ASDTIOA2Device *ioa2Device;
@property (nonatomic) unsigned int userClientID;
@property (copy, nonatomic) id /* block */ setterBlock;
@property (readonly, nonatomic) NSArray *propertySelectorInfo;
@property (retain, nonatomic) NSArray *properties;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfValue;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setValue:(BOOL)a0;
- (BOOL)changeValue:(BOOL)a0;
- (void)pushValue:(unsigned int)a0;
- (void)doSetValue:(BOOL)a0;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 isSettable:(BOOL)a2 element:(unsigned int)a3 scope:(unsigned int)a4 objectClassID:(unsigned int)a5 dictionary:(id)a6;
- (BOOL)synchronizeWithRegistryDictionary:(id)a0;

@end

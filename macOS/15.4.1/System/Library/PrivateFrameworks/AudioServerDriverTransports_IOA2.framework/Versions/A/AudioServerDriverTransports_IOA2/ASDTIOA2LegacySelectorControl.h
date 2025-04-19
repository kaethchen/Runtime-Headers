@class NSString, ASDTIOA2LegacyDevice;

@interface ASDTIOA2LegacySelectorControl : ASDSelectorControl <ASDTIOA2LegacyControl> {
    ASDTIOA2LegacyDevice *_ioa2Device;
    BOOL _multiSelector;
}

@property (readonly, nonatomic) unsigned int userClientID;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfSelectedValue;

- (void).cxx_destruct;
- (BOOL)changeValues:(const unsigned int *)a0 withCount:(unsigned long long)a1;
- (BOOL)setSelectedValues:(const unsigned int *)a0 withCount:(unsigned long long)a1;
- (void)pushValue:(unsigned int)a0;
- (BOOL)doSetValues:(const unsigned int *)a0 withCount:(unsigned long long)a1;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 isSettable:(BOOL)a2 forElement:(unsigned int)a3 inScope:(unsigned int)a4 objectClassID:(unsigned int)a5 dictionary:(id)a6;
- (void)pushValues:(id)a0;
- (BOOL)synchronizeWithRegistry;

@end

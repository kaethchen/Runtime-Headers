@class NSObject;
@protocol OS_dispatch_queue;

@interface ASDStereoPanControl : ASDControl {
    float _value;
    NSObject<OS_dispatch_queue> *_valueQueue;
    unsigned int _leftPanChannel;
    unsigned int _rightPanChannel;
}

@property (nonatomic) float value;
@property (nonatomic) unsigned int leftPanChannel;
@property (nonatomic) unsigned int rightPanChannel;
@property (readonly, nonatomic, getter=isSettable) BOOL settable;

- (void).cxx_destruct;
- (float)value;
- (void)setValue:(float)a0;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (id)initWithPlugin:(id)a0;
- (unsigned int)baseClass;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (id)driverClassName;
- (unsigned int)rightPanChannel;
- (BOOL)changeValue:(float)a0;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2 andObjectClassID:(unsigned int)a3;
- (id)initWithValue:(float)a0 leftPanChannel:(unsigned int)a1 rightPanChannel:(unsigned int)a2 isSettable:(BOOL)a3 forElement:(unsigned int)a4 inScope:(unsigned int)a5 withPlugin:(id)a6;
- (id)initWithValue:(float)a0 leftPanChannel:(unsigned int)a1 rightPanChannel:(unsigned int)a2 isSettable:(BOOL)a3 forElement:(unsigned int)a4 inScope:(unsigned int)a5 withPlugin:(id)a6 andObjectClassID:(unsigned int)a7;
- (unsigned int)leftPanChannel;
- (void)setLeftPanChannel:(unsigned int)a0;
- (void)setPanChannel:(unsigned int)a0 isLeft:(BOOL)a1;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;
- (void)setRightPanChannel:(unsigned int)a0;

@end

@class ASDControl;

@interface ASDTControlProperty : ASDCustomProperty

@property (weak, nonatomic) ASDControl *control;
@property (nonatomic) struct AudioObjectPropertyAddress { unsigned int mSelector; unsigned int mScope; unsigned int mElement; } controlAddress;

+ (id)forControl:(id)a0 controlSelector:(unsigned int)a1 propertySelector:(unsigned int)a2 propertyDataType:(unsigned int)a3;
+ (id)forControl:(id)a0 controlSelector:(unsigned int)a1 propertySelector:(unsigned int)a2 propertyDataType:(unsigned int)a3 andQualifierDataType:(unsigned int)a4;

- (void).cxx_destruct;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)a0 andQualifierData:(const void *)a1;
- (BOOL)getPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int *)a2 andData:(void *)a3 forClient:(int)a4;
- (BOOL)isSettable;
- (BOOL)setPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int)a2 andData:(const void *)a3 forClient:(int)a4;
- (id)initForControl:(id)a0 controlSelector:(unsigned int)a1 propertySelector:(unsigned int)a2 propertyDataType:(unsigned int)a3 andQualifierDataType:(unsigned int)a4;

@end

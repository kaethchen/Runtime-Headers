@class ASDObject;

@interface ASDPassthroughProperty : ASDCustomProperty <ASDCustomPropertyInterest>

@property (weak, nonatomic) ASDObject *underlyingObject;
@property (nonatomic) struct AudioObjectPropertyAddress { unsigned int mSelector; unsigned int mScope; unsigned int mElement; } propertyAddress;

- (void).cxx_destruct;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)a0 andQualifierData:(const void *)a1;
- (BOOL)getPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int *)a2 andData:(void *)a3 forClient:(int)a4;
- (id)initWithUnderlyingObject:(id)a0 address:(id)a1 propertyDataType:(unsigned int)a2 andQualifierDataType:(unsigned int)a3;
- (id)initWithUnderlyingObject:(id)a0 andAddress:(id)a1;
- (id)initWithUnderlyingObject:(id)a0 andPropertyAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a1;
- (id)initWithUnderlyingObject:(id)a0 propertyAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a1 propertyDataType:(unsigned int)a2 andQualifierDataType:(unsigned int)a3;
- (BOOL)isSettable;
- (void)propertyChangeNotification:(id)a0;
- (BOOL)setPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int)a2 andData:(const void *)a3 forClient:(int)a4;

@end

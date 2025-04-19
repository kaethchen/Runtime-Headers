@interface QCProxyPort : QCPort

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)baseClass;

- (double)doubleValue;
- (id)object;
- (BOOL)setObject:(id)a0;
- (id)stringValue;
- (id)value;
- (BOOL)booleanValue;
- (void)setStringValue:(id)a0;
- (unsigned long long)_timestamp;
- (BOOL)setValue:(id)a0;
- (void)setDoubleValue:(double)a0;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (Class)objectClass;
- (Class)valueClass;
- (id)stateValue;
- (id)rawValue;
- (BOOL)setStateValue:(id)a0;
- (id)imageValue;
- (void)setBooleanValue:(BOOL)a0;
- (void)setImageValue:(id)a0;
- (id)_argumentsFromAttributesKey:(id)a0 originalArguments:(id)a1;
- (void)_setConnectedPort:(id)a0;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (BOOL)canConnectToPort:(id)a0;
- (void)editValueWithEvent:(id)a0 inView:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (unsigned long long)indexValue;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (id)meshValue;
- (void)portWillDeleteFromNode;
- (void)resetParameterView:(id)a0;
- (void)setIndexValue:(unsigned long long)a0;
- (void)setMeshValue:(id)a0;
- (void)setRawValue:(id)a0;
- (void)setRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)setStructureValue:(id)a0;
- (id)setupParameterView;
- (id)structureValue;
- (BOOL)takeValue:(id)a0 fromPort:(id)a1;

@end

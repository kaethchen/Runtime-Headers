@interface AVB17221AEMControlDescriptorSamplingRateValue : AVB17221AEMControlDescriptorValue

@property unsigned int samplingRate;
@property unsigned char pull;
@property unsigned int baseFrequency;

+ (id)keyPathsForValuesAffectingBaseFrequency;
+ (id)keyPathsForValuesAffectingPull;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned char)pull;
- (unsigned int)baseFrequency;
- (void)setBaseFrequency:(unsigned int)a0;
- (id)valueXMLElement;
- (id)initWithValuePointer:(char **)a0 valueType:(unsigned short)a1;
- (id)objectsForSetCommandValuesData:(id)a0;
- (id)valueDictionary;
- (id)currentValueData;
- (unsigned long long)currentValueSize;
- (id)debugLogStringWithIndentation:(id)a0;
- (unsigned short)numberOfValues;
- (void)setCurrentValueData:(id)a0;
- (void)setPull:(unsigned char)a0;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)updateWithValueDictionary:(id)a0;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (BOOL)validControlValueType:(unsigned short)a0;
- (unsigned long long)valuesSize;

@end

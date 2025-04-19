@class NSArray, AVB17221AEMLocalizedStringReference;

@interface AVB17221AEMControlDescriptorSelectorStringValue : AVB17221AEMControlDescriptorValue

@property unsigned short unitType;
@property unsigned char unitMultiplier;
@property unsigned char unitCode;
@property (copy) NSArray *options;
@property (retain) AVB17221AEMLocalizedStringReference *currentValue;
@property (retain) AVB17221AEMLocalizedStringReference *defaultValue;

+ (id)keyPathsForValuesAffectingUnitCode;
+ (id)keyPathsForValuesAffectingUnitMultiplier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)valueXMLElement;
- (id)objectsForSetCommandValuesData:(id)a0;
- (id)valueDictionary;
- (id)currentValueData;
- (unsigned long long)currentValueSize;
- (id)debugLogStringWithIndentation:(id)a0;
- (char *)getUInt16ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (id)initWithValuePointer:(char **)a0 numberOfValues:(unsigned short)a1 valueType:(unsigned short)a2;
- (unsigned short)numberOfValues;
- (void)setCurrentValueData:(id)a0;
- (char *)setUInt16ValuesAtPointer:(char *)a0;
- (void)setUnitCode:(unsigned char)a0;
- (void)setUnitMultiplier:(unsigned char)a0;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned char)unitCode;
- (unsigned char)unitMultiplier;
- (BOOL)updateWithValueDictionary:(id)a0;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (BOOL)validControlValueType:(unsigned short)a0;
- (unsigned long long)valuesSize;

@end

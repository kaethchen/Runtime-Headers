@class NSNumber, NSArray, AVB17221AEMLocalizedStringReference;

@interface AVB17221AEMControlDescriptorArrayValue : AVB17221AEMControlDescriptorValue

@property unsigned short unitType;
@property unsigned char unitMultiplier;
@property unsigned char unitCode;
@property (copy) AVB17221AEMLocalizedStringReference *string;
@property (retain) NSNumber *minValue;
@property (retain) NSNumber *maxValue;
@property (retain) NSNumber *step;
@property (retain) NSNumber *defaultValue;
@property (copy) NSArray *currentValues;

+ (id)keyPathsForValuesAffectingUnitCode;
+ (id)keyPathsForValuesAffectingUnitMultiplier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)valueXMLElement;
- (id)objectsForSetCommandValuesData:(id)a0;
- (id)valueDictionary;
- (id)currentValueData;
- (unsigned long long)currentValueSize;
- (id)debugLogStringWithIndentation:(id)a0;
- (char *)getDoubleValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getFloatValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getInt16ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getInt32ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getInt64ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getInt8ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getUInt16ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getUInt32ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getUInt64ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getUInt8ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (id)initWithValuePointer:(char **)a0 numberOfValues:(unsigned short)a1 valueType:(unsigned short)a2;
- (id)initWithValueType:(unsigned short)a0;
- (unsigned short)numberOfValues;
- (void)setCurrentValueData:(id)a0;
- (char *)setDoubleValuesAtPointer:(char *)a0;
- (char *)setFloatValuesAtPointer:(char *)a0;
- (char *)setInt16ValuesAtPointer:(char *)a0;
- (char *)setInt32ValuesAtPointer:(char *)a0;
- (char *)setInt64ValuesAtPointer:(char *)a0;
- (char *)setInt8ValuesAtPointer:(char *)a0;
- (char *)setUInt16ValuesAtPointer:(char *)a0;
- (char *)setUInt32ValuesAtPointer:(char *)a0;
- (char *)setUInt64ValuesAtPointer:(char *)a0;
- (char *)setUInt8ValuesAtPointer:(char *)a0;
- (void)setUnitCode:(unsigned char)a0;
- (void)setUnitMultiplier:(unsigned char)a0;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)typeSize;
- (unsigned char)unitCode;
- (unsigned char)unitMultiplier;
- (BOOL)updateWithValueDictionary:(id)a0;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (BOOL)validControlValueType:(unsigned short)a0;
- (id)valuesDataWithNewNumberValue:(id)a0 atValueIndex:(unsigned short)a1;
- (unsigned long long)valuesSize;

@end

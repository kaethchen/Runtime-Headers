@class AVB17221AEMBodePlotEntry, NSArray;

@interface AVB17221AEMControlDescriptorBodePlotValue : AVB17221AEMControlDescriptorValue

@property (copy, nonatomic) AVB17221AEMBodePlotEntry *minValue;
@property (copy, nonatomic) AVB17221AEMBodePlotEntry *maxValue;
@property (copy, nonatomic) AVB17221AEMBodePlotEntry *step;
@property (copy, nonatomic) AVB17221AEMBodePlotEntry *defaultValue;
@property (copy, nonatomic) NSArray *currentValues;

- (void)dealloc;
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
- (id)initWithValuePointer:(char **)a0 numberOfValues:(unsigned short)a1;
- (unsigned short)numberOfValues;
- (void)setCurrentValueData:(id)a0;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)updateWithValueDictionary:(id)a0;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (BOOL)validControlValueType:(unsigned short)a0;
- (unsigned long long)valuesSize;

@end

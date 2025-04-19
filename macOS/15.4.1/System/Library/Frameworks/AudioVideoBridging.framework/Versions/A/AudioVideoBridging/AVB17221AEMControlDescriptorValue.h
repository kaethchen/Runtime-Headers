@class NSData;

@interface AVB17221AEMControlDescriptorValue : AVB17221AEMObject <NSCopying>

@property unsigned short controlValueType;
@property (readonly, nonatomic) unsigned long long valuesSize;
@property (readonly, nonatomic) unsigned short numberOfValues;
@property (readonly, nonatomic) unsigned long long currentValueSize;
@property (copy, nonatomic) NSData *currentValueData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)valueXMLElement;
- (id)initWithValuePointer:(char **)a0 valueType:(unsigned short)a1;
- (id)objectsForSetCommandValuesData:(id)a0;
- (id)valueDictionary;
- (id)currentValueData;
- (id)initWithValueType:(unsigned short)a0;
- (unsigned short)numberOfValues;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (void)setCurrentValueData:(id)a0;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithValueDictionary:(id)a0;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (BOOL)validControlValueType:(unsigned short)a0;
- (id)valuesDataWithNewNumberValue:(id)a0 atValueIndex:(unsigned short)a1;
- (unsigned long long)valuesSize;
- (id)xmlRepresentation;

@end

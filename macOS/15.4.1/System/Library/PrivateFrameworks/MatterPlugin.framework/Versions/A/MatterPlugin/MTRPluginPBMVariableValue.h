@class NSData, MTRPluginPBMVariableValueList, NSString, MTRPluginPBMVariableValueDictionary, MTRPluginPBMClusterPath, MTRPluginPBMCommandPath, MTRPluginPBMError, MTRPluginPBMAttributePath, MTRPluginPBMEventPath, MTRPluginPBMDate, MTRPluginPBMUUID, MTRPluginPBMURL;

@interface MTRPluginPBMVariableValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char integerValue : 1; unsigned char unsignedIntegerValue : 1; } _has;
}

@property (retain, nonatomic) id object;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) BOOL hasUnsignedIntegerValue;
@property (nonatomic) unsigned long long unsignedIntegerValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL hasUuidValue;
@property (retain, nonatomic) MTRPluginPBMUUID *uuidValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (retain, nonatomic) MTRPluginPBMDate *dateValue;
@property (readonly, nonatomic) BOOL hasUrlValue;
@property (retain, nonatomic) MTRPluginPBMURL *urlValue;
@property (readonly, nonatomic) BOOL hasArrayValue;
@property (retain, nonatomic) MTRPluginPBMVariableValueList *arrayValue;
@property (readonly, nonatomic) BOOL hasSetValue;
@property (retain, nonatomic) MTRPluginPBMVariableValueList *setValue;
@property (readonly, nonatomic) BOOL hasDictionaryValue;
@property (retain, nonatomic) MTRPluginPBMVariableValueDictionary *dictionaryValue;
@property (readonly, nonatomic) BOOL hasErrorValue;
@property (retain, nonatomic) MTRPluginPBMError *errorValue;
@property (readonly, nonatomic) BOOL hasClusterPathValue;
@property (retain, nonatomic) MTRPluginPBMClusterPath *clusterPathValue;
@property (readonly, nonatomic) BOOL hasAttributePathValue;
@property (retain, nonatomic) MTRPluginPBMAttributePath *attributePathValue;
@property (readonly, nonatomic) BOOL hasCommandPathValue;
@property (retain, nonatomic) MTRPluginPBMCommandPath *commandPathValue;
@property (readonly, nonatomic) BOOL hasEventPathValue;
@property (retain, nonatomic) MTRPluginPBMEventPath *eventPathValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)_setObject:(id)a0;
- (id)initWithObjectValue:(id)a0;

@end

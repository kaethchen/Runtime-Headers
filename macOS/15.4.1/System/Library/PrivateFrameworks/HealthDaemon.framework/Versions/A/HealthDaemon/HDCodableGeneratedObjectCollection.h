@class NSMutableArray;

@interface HDCodableGeneratedObjectCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *medicationDoseEvents;

+ (Class)medicationDoseEventType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addMedicationDoseEvent:(id)a0;
- (void)clearMedicationDoseEvents;
- (id)decodedObjects;
- (id)medicationDoseEventAtIndex:(unsigned long long)a0;
- (unsigned long long)medicationDoseEventsCount;
- (BOOL)unitTest_isEquivalentToGeneratedObjectCollection:(id)a0;

@end

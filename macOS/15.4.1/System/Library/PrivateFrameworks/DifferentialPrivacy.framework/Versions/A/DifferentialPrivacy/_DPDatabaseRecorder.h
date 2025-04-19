@class _DPStorage, NSSet;

@interface _DPDatabaseRecorder : _DPDataRecorder

@property (readonly, nonatomic) _DPStorage *db;
@property (readonly, nonatomic) NSSet *blacklistSet;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)recordBitVectors:(id)a0 metadata:(id)a1;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1;
- (void)directUploadRecords:(id)a0 forKey:(id)a1;
- (void)donateRandomizationEventToBitacoraForKey:(id)a0 succeeded:(BOOL)a1 errorCode:(int)a2 count:(int)a3;
- (id)initWithKey:(id)a0 storage:(id)a1;
- (id)initWithKey:(id)a0 storage:(id)a1 systemBlacklistPath:(id)a2 runtimeBlacklistPath:(id)a3;
- (BOOL)isMetadataValid:(id)a0;
- (void)recordBitValues:(id)a0;
- (void)recordBitValues:(id)a0 metadata:(id)a1;
- (void)recordBitVectors:(id)a0;
- (void)recordFloatVectors:(id)a0;
- (void)recordNumbers:(id)a0;
- (void)recordNumbers:(id)a0 metadata:(id)a1;
- (void)recordNumbersVectors:(id)a0;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1;
- (void)recordStrings:(id)a0;
- (void)recordStrings:(id)a0 metadata:(id)a1;
- (void)recordWords:(id)a0;

@end

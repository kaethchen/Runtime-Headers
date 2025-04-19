@class NSCountedSet, NSMutableSet;

@interface BackUpLaterCache : NSObject {
    NSMutableSet *_reservationsPaths;
    NSMutableSet *_backUpLaterRecords;
}

@property (readonly) NSCountedSet *recordTypes;

+ (id)cacheWithContentsOfFile:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithContentsOfFile:(id)a0;
- (BOOL)writeToFile:(id)a0;
- (id)_bulRecordsDiskRepresentation;
- (id)_readBULRecordsFromDictionary:(id)a0;
- (void)addBackUpLaterRecord:(id)a0;
- (void)addBackUpLaterRecords:(id)a0;
- (void)addReservationPath:(id)a0;
- (id)backUpLaterRecords;
- (id)backUpLaterRecordsForType:(unsigned long long)a0;
- (id)backUpLaterRecordsForVolumeUUID:(id)a0;
- (unsigned long long)countForType:(unsigned long long)a0;
- (BOOL)hasRecordType:(unsigned long long)a0;
- (void)removeBackUpLaterRecord:(id)a0;
- (id)reservedPaths;

@end

@class KHDBDropDef;

@interface KHDBBucket : NSObject {
    KHDBDropDef *_dropDef;
    unsigned long long _dropCount;
    unsigned long long _bytesCapacity;
    char *_dropStorage;
    char *_stringStorage;
    unsigned long long _stringCapacity;
    unsigned long long _stringsUsed;
    unsigned long long _dropIndex;
    int _nextNullIndex;
    int _previousNullIndex;
}

@property (nonatomic) unsigned long long dropCapacity;
@property (nonatomic) unsigned long long fieldIndex;
@property (nonatomic) unsigned long long dropOffset;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (void)addTimeInterval:(double)a0;
- (unsigned long long)count;
- (double)readDouble;
- (id)readString;
- (void)addBool:(BOOL)a0;
- (void)addInteger:(long long)a0;
- (BOOL)readBool;
- (id)readDate;
- (id)dropDef;
- (void)addNull;
- (id)modelIdAtIndex:(unsigned long long)a0;
- (void)resetForWriting;
- (void)addDataBlob:(id)a0;
- (void)addDouble:(double)a0;
- (char *)addVarcharOfLength:(int)a0;
- (BOOL)bucketIsFull;
- (const char *)bufferForOffset:(int)a0;
- (BOOL)currentFieldIsNull;
- (int)grabBufferOffsetOfSize:(int)a0;
- (id)initWithFieldCapacity:(unsigned long long)a0;
- (id)nextObjectForType:(int)a0;
- (id)readDataBlob;
- (id)readDecimalAsNumber;
- (long long)readInteger;
- (id)readIntegerAsNumber;
- (BOOL)readNextDrop;
- (double)readTimeInterval;
- (void)rewindForReading;
- (BOOL)writeNextDrop;

@end

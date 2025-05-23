@class NSString, NSMutableDictionary;

@interface ICCRVectorTimestamp : NSObject <ICCRDataType, NSCopying, ICCRCoding> {
    NSMutableDictionary *_clock;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)compare:(id)a0;
- (id)shortDescription;
- (void)setDocument:(id)a0;
- (id)tombstone;
- (void)mergeWith:(id)a0;
- (void)removeUUID:(id)a0;
- (id)allUUIDs;
- (id)clockElementForUUID:(id)a0;
- (unsigned long long)clockForUUID:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeIntoProtobufTimestamp:(void *)a0 coder:(id)a1;
- (void)incrementClockForUUID:(id)a0;
- (id)initWithProtobufTimestamp:(const void *)a0 decoder:(id)a1;
- (void)maxClock:(unsigned long long)a0 forUUID:(id)a1;
- (void)minusVectorTimestamp:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)a0;
- (id)timestampForReplica:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0;

@end

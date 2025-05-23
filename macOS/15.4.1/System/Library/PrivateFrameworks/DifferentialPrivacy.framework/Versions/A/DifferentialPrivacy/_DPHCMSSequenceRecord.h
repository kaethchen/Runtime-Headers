@interface _DPHCMSSequenceRecord : _DPCMSSequenceRecord

@property (nonatomic) int sequenceBitIndex;

+ (id)entityName;

- (id)description;
- (BOOL)copyToManagedObject:(id)a0;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)initWithKey:(id)a0 plainSequence:(id)a1 sequence:(id)a2 sequenceHashIndex:(unsigned short)a3 sequenceBitIndex:(unsigned int)a4 creationDate:(double)a5 submitted:(BOOL)a6 objectId:(id)a7;

@end

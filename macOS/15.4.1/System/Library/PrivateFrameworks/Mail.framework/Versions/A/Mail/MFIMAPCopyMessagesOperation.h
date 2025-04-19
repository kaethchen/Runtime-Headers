@class NSPointerArray, NSString, NSIndexSet;

@interface MFIMAPCopyMessagesOperation : MFIMAPOperation

@property (retain, nonatomic) NSPointerArray *sourceUidPointerArray;
@property (retain, nonatomic) NSPointerArray *destinationUidPointerArray;
@property (copy, nonatomic) NSString *destinationMailbox;
@property (readonly, copy, nonatomic) NSIndexSet *sourceUids;
@property (readonly, copy, nonatomic) NSIndexSet *destinationUids;
@property (nonatomic) BOOL usesRealUids;

- (id)description;
- (void).cxx_destruct;
- (unsigned char)operationType;
- (unsigned long long)approximateSize;
- (void)_deserializeOpSpecificValuesFromData:(id)a0 cursor:(unsigned long long *)a1;
- (id)initWithUidStringsToCopy:(id)a0 fromMailbox:(id)a1 toMailbox:(id)a2 firstNewUid:(unsigned int)a3;
- (void)serializeIntoData:(id)a0;
- (unsigned int)sourceUidForTemporaryUid:(unsigned int)a0;

@end

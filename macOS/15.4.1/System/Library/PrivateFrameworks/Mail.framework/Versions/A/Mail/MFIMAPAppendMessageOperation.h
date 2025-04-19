@class NSArray, NSDate;

@interface MFIMAPAppendMessageOperation : MFIMAPOperation

@property (nonatomic) unsigned int uid;
@property (copy, nonatomic) NSArray *flags;
@property (nonatomic) int internalDateAsInt;
@property (readonly, nonatomic) NSDate *internalDate;
@property (nonatomic) BOOL usesRealUids;

- (id)description;
- (void).cxx_destruct;
- (unsigned char)operationType;
- (void)_deserializeOpSpecificValuesFromData:(id)a0 cursor:(unsigned long long *)a1;
- (id)initWithAppendedUid:(unsigned int)a0 flags:(id)a1 internalDate:(id)a2 mailbox:(id)a3;
- (void)serializeIntoData:(id)a0;

@end

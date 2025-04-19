@class NSString;

@interface MFIMAPOperation : NSObject

@property (readonly, nonatomic) unsigned char operationType;
@property (nonatomic) BOOL usesRealUids;
@property (readonly, copy, nonatomic) NSString *mailboxName;

+ (id)newOperationWithSerializedData:(id)a0 cursor:(unsigned long long *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_deserializeOpSpecificValuesFromData:(id)a0 cursor:(unsigned long long *)a1;
- (id)_initWithMailboxName:(id)a0;
- (unsigned char)_magic;
- (void)serializeIntoData:(id)a0;

@end

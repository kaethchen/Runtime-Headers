@class NSArray, NSString, NSMutableArray;

@interface NFNdefMessage : NSObject <NSSecureCoding, NFNdefMessage> {
    NSMutableArray *_records;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *records;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithBytes:(const void *)a0 length:(unsigned int)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void)addRecord:(id)a0;
- (id)asData;
- (id)decode;
- (void)addRecordArray:(id)a0;
- (id)initWithNDEFMessage:(id)a0;

@end

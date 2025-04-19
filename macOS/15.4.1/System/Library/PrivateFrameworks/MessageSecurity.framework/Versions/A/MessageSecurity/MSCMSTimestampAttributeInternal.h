@interface MSCMSTimestampAttributeInternal : NSObject <MSCMSAttributeCoder> {
    void /* unknown type, empty encoding */ tstinfo;
    void /* unknown type, empty encoding */ signedData;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ attributeType;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithTimestampToken:(id)a0 error:(id *)a1;
- (id)timestampToken;
- (BOOL)verifyTimestamp:(id)a0 error:(id *)a1;

@end

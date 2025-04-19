@class NSData, NSNumber;

@interface MTRDiagnosticLogsClusterRetrieveLogsResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *content;
@property (copy, nonatomic) NSNumber *timeStamp;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSData *logContent;
@property (copy, nonatomic) NSNumber *utcTimeStamp;
@property (copy, nonatomic) NSNumber *timeSinceBoot;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const void *)a0;

@end

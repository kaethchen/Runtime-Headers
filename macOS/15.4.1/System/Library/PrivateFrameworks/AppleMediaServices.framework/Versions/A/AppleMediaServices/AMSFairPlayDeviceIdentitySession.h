@class NSDate;

@interface AMSFairPlayDeviceIdentitySession : NSObject {
    void *_fpdiSession;
    void *_attributes;
}

@property (readonly, nonatomic) NSDate *creationDate;

+ (BOOL)reset:(id *)a0;
+ (id)stringForStage:(unsigned long long)a0;
+ (id)errorForFPDIStatus:(int)a0 stage:(unsigned long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)creationDataWithError:(id *)a0;
- (unsigned long long)fpdiSessionId;
- (id)initWithExistingSession:(unsigned long long)a0 creationDate:(id)a1 error:(id *)a2;
- (id)initWithLevel:(long long)a0 error:(id *)a1;
- (id)initializationDataWithCreationResponseData:(id)a0 error:(id *)a1;
- (BOOL)setupSessionWithInitializationResponseData:(id)a0 error:(id *)a1;
- (id)signatureForData:(id)a0 error:(id *)a1;

@end

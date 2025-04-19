@class NSString, NSData, NSDate;

@interface CMLUseCaseStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *useCase;
@property (readonly, copy, nonatomic) NSData *serializedDynamicConfig;
@property (readonly, copy, nonatomic) NSData *serializedEvaluationKeyConfig;
@property (readonly, copy, nonatomic) NSDate *lastUsed;
@property (readonly, copy, nonatomic) NSDate *keyGenerationTime;
@property (readonly, copy, nonatomic) NSDate *keyExpirationTime;
@property (readonly, nonatomic) unsigned long long status;

+ (void)requestStatusForClientConfig:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (void)requestStatusForClientConfig:(id)a0 options:(unsigned long long)a1 dispatchQueue:(id)a2 completionHandler:(id /* block */)a3;
+ (id)statusForClientConfig:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUseCase:(id)a0 serializedDynamicConfig:(id)a1 serializedEvaluationKeyConfig:(id)a2 lastUsed:(id)a3 keyGenerationTime:(id)a4 keyExpirationTime:(id)a5 status:(unsigned long long)a6;

@end

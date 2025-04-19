@class NSString, PKPaymentRequest;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating> {
    PKPaymentRequest *_request;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)a0;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithPaymentRequest:(id)a0;
- (BOOL)_checkMultiTokenTotal:(id)a0 withAPIType:(long long)a1 error:(id *)a2;
- (BOOL)_checkTotal:(id)a0 withAPIType:(long long)a1 error:(id *)a2;
- (unsigned long long)_checkTotalAmount:(id)a0;
- (id)_errorDescriptionFromMultiTokenContextAmountValidationResult:(unsigned long long)a0 withAPIType:(long long)a1;
- (id)_errorDescriptionFromPaymentTotalAmountValidationResult:(unsigned long long)a0 withAPIType:(long long)a1;
- (id)_errorDescriptionFromTotalAmountValidationResult:(unsigned long long)a0 prefix:(id)a1;
- (BOOL)isValidWithAPIType:(long long)a0 withError:(id *)a1;

@end

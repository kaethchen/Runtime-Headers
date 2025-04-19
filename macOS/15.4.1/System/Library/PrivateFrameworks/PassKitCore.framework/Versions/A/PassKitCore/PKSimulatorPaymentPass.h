@class NSDictionary;

@interface PKSimulatorPaymentPass : PKPaymentPass {
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
- (id)localizedDescription;
- (id)primaryAccountNumberSuffix;
- (id)devicePrimaryPaymentApplication;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (id)primaryAccountIdentifier;

@end

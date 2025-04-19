@class NSString, PKAddCarKeyPassConfiguration;

@interface PKCarKeyTerminalPairingCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAddCarKeyPassConfiguration *configuration;
@property (readonly, nonatomic) NSString *productIdentifier;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)initWithConfiguration:(id)a0 productIdentifier:(id)a1;

@end

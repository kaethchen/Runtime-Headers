@interface WBSCreditCardExporter : WBSJSONExporter <WBSCreditCardExporterProtocol>

+ (id)dataType;
+ (unsigned long long)schemaVersion;

- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)addEntryWithCardNumber:(id)a0 cardName:(id)a1 cardholderName:(id)a2 cardExpirationMonth:(id)a3 cardExpirationYear:(id)a4 lastUsedDate:(id)a5;
- (id)initWithJSONWriter:(id)a0 error:(id *)a1;

@end

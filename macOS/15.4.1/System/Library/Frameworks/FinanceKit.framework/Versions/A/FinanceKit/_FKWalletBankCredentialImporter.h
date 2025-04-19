@class PKBankAccountInformation, NSError;

@interface _FKWalletBankCredentialImporter : NSObject {
    void /* unknown type, empty encoding */ financeStore;
}

+ (id)makeImporter;

- (id)init;
- (void).cxx_destruct;
- (void)insertCredentialFrom:(PKBankAccountInformation *)a0 completionHandler:(void (^)(NSError *))a1;

@end

@class NSString;

@interface NSCloudKitMirroringDelegateWorkBlockContext : NSObject {
    NSString *_transactionLabel;
    NSString *_powerAssertionLabel;
    id _runtimeVoucher;
    unsigned long long _powerAssertionID;
}

- (void)dealloc;
- (id)initWithTransactionLabel:(id)a0 powerAssertionLabel:(id)a1;

@end

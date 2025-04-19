@class NSMutableDictionary;

@interface NSCloudKitMirroringActivityVoucherManager : NSObject {
    NSMutableDictionary *_vouchersByEventType;
}

@property (readonly, nonatomic) unsigned long long countVouchers;

- (void)dealloc;
- (id)init;
- (void)addVoucher:(id)a0;
- (void)expireVoucher:(id)a0;
- (void)expireVouchersForEventType:(long long)a0;
- (BOOL)hasVoucherMatching:(id)a0;
- (id)usableVoucherForEventType:(long long)a0;

@end

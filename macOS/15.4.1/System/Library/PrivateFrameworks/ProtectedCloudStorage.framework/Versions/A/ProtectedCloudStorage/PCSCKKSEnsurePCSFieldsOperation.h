@class PCSCKKSItemModifyContext;

@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context;

- (void).cxx_destruct;
- (void)start;
- (BOOL)haveCKKSPlaintextEntitlements;
- (id)initWithItemModifyContext:(id)a0;
- (int)updateKeychain:(id)a0 withAttributes:(id)a1;

@end

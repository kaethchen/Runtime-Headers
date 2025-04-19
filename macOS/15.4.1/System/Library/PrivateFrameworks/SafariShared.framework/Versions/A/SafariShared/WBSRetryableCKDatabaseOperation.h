@class CKDatabase;

@interface WBSRetryableCKDatabaseOperation : WBSRetryableCKOperation

@property (retain, nonatomic) CKDatabase *database;

- (void).cxx_destruct;
- (void)_setUpOperation:(id)a0;

@end

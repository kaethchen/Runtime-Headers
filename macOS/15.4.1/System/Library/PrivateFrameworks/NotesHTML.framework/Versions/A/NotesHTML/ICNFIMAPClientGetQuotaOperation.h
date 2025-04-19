@class NSString;

@interface ICNFIMAPClientGetQuotaOperation : ICNFIMAPSingleClientOperation

@property (readonly, copy, nonatomic) NSString *quotaRoot;

- (id)init;
- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (id)initWithQuotaRoot:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (BOOL)shouldSendAgainOnError;

@end

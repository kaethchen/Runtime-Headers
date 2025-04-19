@class DMCHangDetectionQueue;

@interface DMCAccountUtilities : NSObject

@property (retain, nonatomic) DMCHangDetectionQueue *signInQueue;

- (void).cxx_destruct;
- (void)signOutAllPrimaryAccounts;

@end

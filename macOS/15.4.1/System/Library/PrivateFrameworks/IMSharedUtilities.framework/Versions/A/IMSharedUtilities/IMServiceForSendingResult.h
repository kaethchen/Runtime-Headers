@class NSDictionary, IMServiceReachabilityResult;

@interface IMServiceForSendingResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isFinal) BOOL final;
@property (readonly, nonatomic) IMServiceReachabilityResult *bestResult;
@property (readonly, nonatomic) NSDictionary *resultsByAccountID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initAsFinalResult:(BOOL)a0 bestResult:(id)a1 resultsByAccountID:(id)a2;
- (id)resultsForServiceName:(id)a0;

@end

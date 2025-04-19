@class NSString;

@interface _UISTouchAuthenticationVerifierResult : NSObject

@property (readonly, nonatomic) BOOL passesSecurityAnalysis;
@property (readonly, nonatomic) NSString *failureReasons;

- (void).cxx_destruct;
- (id)initWithPassesSecurityAnalysis:(BOOL)a0 failureReasons:(id)a1;

@end

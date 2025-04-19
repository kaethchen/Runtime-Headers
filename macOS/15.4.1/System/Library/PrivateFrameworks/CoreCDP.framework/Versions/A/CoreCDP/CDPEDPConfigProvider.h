@class NSString;

@interface CDPEDPConfigProvider : NSObject

@property BOOL fetchCompleted;
@property (copy) NSString *tokenName;
@property (copy) NSString *tokenNameTitle;
@property (copy) NSString *tokenNameMedium;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_extractTokenNameFromConfig:(id)a0 finalize:(BOOL)a1;
- (void)fetchConfig;

@end

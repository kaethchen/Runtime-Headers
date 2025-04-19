@class NSString, NSArray;

@interface NFRunScriptParametersInternal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *seid;
@property (nonatomic) BOOL checkAIDAllowList;
@property (retain, nonatomic) NSArray *AIDAllowList;
@property (nonatomic) BOOL initialSelectBeforeRun;
@property (nonatomic) BOOL includeAPDUDuration;
@property (nonatomic) BOOL deactivateAllApps;
@property (nonatomic) BOOL toSystemOS;
@property (nonatomic) BOOL disableCompletionNotification;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

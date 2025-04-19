@class NSString;

@interface SMTRequestDispatcherSessionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *assistantId;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL understandingOnDevice;
@property (readonly, nonatomic) BOOL isSystemAssistantExperienceEnabled;
@property (readonly, copy, nonatomic) NSString *sharedUserId;
@property (readonly, nonatomic) struct { unsigned int val[8]; } clientAuditToken;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;

@end

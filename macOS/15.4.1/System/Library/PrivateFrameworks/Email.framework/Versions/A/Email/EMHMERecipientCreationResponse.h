@class NSString;

@interface EMHMERecipientCreationResponse : AAResponse

@property (copy, nonatomic) NSString *replyToAddress;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end

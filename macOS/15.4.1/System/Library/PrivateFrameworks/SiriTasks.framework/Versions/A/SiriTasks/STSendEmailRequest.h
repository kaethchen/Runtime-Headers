@class STEmailMessage;

@interface STSendEmailRequest : AFSiriRequest {
    STEmailMessage *_message;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)message;
- (id)_initWithMessage:(id)a0;
- (id)createResponse;
- (BOOL)_makeAppFrontmost;

@end

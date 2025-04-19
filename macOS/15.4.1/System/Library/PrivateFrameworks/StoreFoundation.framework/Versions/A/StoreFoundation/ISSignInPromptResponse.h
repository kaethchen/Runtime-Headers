@class NSString, NSNumber, NSDictionary;

@interface ISSignInPromptResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long returnCode;
@property (retain) NSString *username;
@property (retain) NSString *password;
@property (retain) NSNumber *suppressionCheckboxState;
@property (retain) NSDictionary *serverResponse;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

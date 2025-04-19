@class NSString;

@interface VSCredentialEntryField : NSObject

@property (copy, nonatomic) NSString *recentsTitle;
@property (copy, nonatomic) NSString *recentsMessage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic, getter=isSecure) BOOL secure;
@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isRequired) BOOL required;
@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;

@end

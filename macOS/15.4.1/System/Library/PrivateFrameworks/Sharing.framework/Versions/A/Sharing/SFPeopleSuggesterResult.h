@class NSString, NSArray;

@interface SFPeopleSuggesterResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contactID;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSString *sendersKnownAlias;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

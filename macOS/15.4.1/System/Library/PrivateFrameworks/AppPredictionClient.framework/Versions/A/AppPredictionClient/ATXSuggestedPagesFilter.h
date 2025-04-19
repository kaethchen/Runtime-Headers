@class NSString;

@interface ATXSuggestedPagesFilter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *modeUUID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

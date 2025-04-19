@class NSDictionary;

@interface STDiagnosticsServiceMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long messageCategory;
@property (retain) NSDictionary *userInfo;

+ (id)nameForMessageCategory:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageType:(long long)a0 withUserInfo:(id)a1;

@end

@class SLShareableContentLoadResult;

@interface SLFetchShareableContentActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) SLShareableContentLoadResult *result;

+ (BOOL)supportsSecureCoding;
+ (id)responseWithResult:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

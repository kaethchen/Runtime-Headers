@class NSArray, NSString;

@interface SLShareableContentRepresentationCollection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *representations;
@property (readonly, copy, nonatomic) NSString *suggestedFileName;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRepresentations:(id)a0 suggestedFileName:(id)a1;

@end

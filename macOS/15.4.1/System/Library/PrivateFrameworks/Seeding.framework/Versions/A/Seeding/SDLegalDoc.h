@class NSString;

@interface SDLegalDoc : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long legal_id;
@property (copy) NSString *title;
@property (copy) NSString *content;

+ (id)legalDocWithID:(long long)a0 title:(id)a1 content:(id)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(long long)a0 title:(id)a1 content:(id)a2;

@end

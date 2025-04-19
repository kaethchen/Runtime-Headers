@class NSString, NSArray;

@interface GEOETATrafficUpdateErrorInfo : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSString *key;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *internalErrors;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponse:(id)a0;

@end

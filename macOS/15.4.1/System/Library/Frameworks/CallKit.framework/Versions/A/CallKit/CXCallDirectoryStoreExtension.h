@class NSString, NSDate;

@interface CXCallDirectoryStoreExtension : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long primaryKey;
@property (nonatomic) long long priority;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *stateLastModified;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

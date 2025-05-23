@class NSString;

@interface MAAutoAssetSetInfoEnd : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *endLockReason;
@property (readonly, nonatomic) long long endLockCount;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithLockReason:(id)a0 endingLockCount:(long long)a1;

@end

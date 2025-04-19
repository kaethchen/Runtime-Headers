@class NSString, CTDataUsed;

@interface CTAppDataUsage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CTDataUsed *used;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)usage;
- (id)init:(id)a0 withDisplayName:(id)a1 andUsage:(id)a2;

@end

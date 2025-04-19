@class NSString;

@interface MAAutoAssetLockReason : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *autoAssetClientName;
@property (retain, nonatomic) NSString *lockReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initForClientName:(id)a0 forLockReason:(id)a1;
- (id)newSummaryDictionary;

@end

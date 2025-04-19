@interface NDManagedFeedItemPoolOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ preferredCount;
    void /* unknown type, empty encoding */ preferredOrder;
    void /* unknown type, empty encoding */ preferredFilterOptions;
    void /* unknown type, empty encoding */ preferredESLRatio;
    void /* unknown type, empty encoding */ includeAllFromTagIDs;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

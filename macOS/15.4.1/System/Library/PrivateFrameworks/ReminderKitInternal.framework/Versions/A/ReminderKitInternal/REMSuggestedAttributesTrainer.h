@interface REMSuggestedAttributesTrainer : REMStoreSwiftInvocation

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFetchResultTokenToDiffAgainst:(id)a0;

@end

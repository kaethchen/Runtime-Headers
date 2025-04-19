@interface REMFetchResultToken_Codable : REMFetchResultToken

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithPersistentHistoryTokens:(id)a0;

@end

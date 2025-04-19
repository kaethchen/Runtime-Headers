@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *recordType;

+ (id)new;
+ (void)initialize;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithSubscriptionID:(id)a0;
- (void)setRecordType:(id)a0;
- (id)CKPropertiesDescription;

@end

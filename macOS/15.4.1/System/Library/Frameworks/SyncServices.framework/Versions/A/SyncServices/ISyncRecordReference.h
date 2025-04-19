@interface ISyncRecordReference : NSObject <NSCoding>

+ (id)recordReferenceForRecordWithIdentifier:(id)a0 usingSnapshot:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

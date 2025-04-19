@class NSNumber, NSString;

@interface KHDBAddress : NSObject <NSCopying, NSCoding> {
    NSNumber *_modelId;
    NSString *_databaseUuid;
}

+ (id)modelIdListForAddresses:(id)a0;
+ (id)modelIdsForAddresses:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)modelId;
- (id)modelIdAsNumber;
- (id)databaseUuid;
- (id)initWithDatabaseUuid:(id)a0 modelId:(id)a1;

@end

@class NSString, NSUUID;

@interface HDCloudSyncOwnerIdentifier : NSObject <NSCopying> {
    NSString *_deviceIdentifier;
    NSUUID *_databaseIdentifier;
    NSString *_ownerDifferentiator;
    NSString *_ownerIdentifierString;
}

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *cloudKitIdentifier;

+ (id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)a0 deviceIdentifier:(id)a1 ownerDifferentiator:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithDatabaseIdentifer:(id)a0 deviceIdentifier:(id)a1 ownerDifferentiator:(id)a2;

@end

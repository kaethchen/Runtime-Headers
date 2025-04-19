@class NSData, ECBIMIInfo, NSArray;

@interface EDPersistedBIMIInfo : NSObject <NSCopying>

@property (retain) NSData *internalIndicator;
@property (readonly, nonatomic) ECBIMIInfo *bimiInfo;
@property (readonly, nonatomic) long long indicatorDatabaseID;
@property (readonly, nonatomic) long long evidenceDatabaseID;
@property (copy) NSData *indicator;
@property (copy) NSData *evidence;
@property (copy) NSArray *unverifiedMessageDatabaseIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBIMIInfo:(id)a0 indicatorDatabaseID:(long long)a1 evidenceDatabaseID:(long long)a2;

@end

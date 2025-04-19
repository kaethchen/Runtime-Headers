@class NSString, SYDManagedDatabase, NSSet, NSData;

@interface SYDManagedStore : NSManagedObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long totalDataLength;
@property (retain, nonatomic) SYDManagedDatabase *database;
@property (retain, nonatomic) NSSet *keyValues;
@property (retain, nonatomic) NSData *syncAnchorServerSystemFieldsRecordData;

@end

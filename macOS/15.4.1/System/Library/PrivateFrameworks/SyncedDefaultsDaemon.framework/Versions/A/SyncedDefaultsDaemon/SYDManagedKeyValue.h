@class NSString, SYDManagedStore, NSData, NSDate;

@interface SYDManagedKeyValue : NSManagedObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *plistDataValue;
@property (nonatomic) long long plistDataLength;
@property (retain, nonatomic) NSDate *valueModificationDate;
@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSData *serverSystemFieldsRecordData;
@property (retain, nonatomic) SYDManagedStore *store;
@property (copy, nonatomic) id value;

@end

@class NSDictionary, NSArray, NSMutableDictionary;

@interface PKCloudStoreRecord : NSObject {
    NSMutableDictionary *_records;
}

@property (copy, nonatomic) NSDictionary *cloudStoreSpecificKeys;
@property (readonly, nonatomic) NSArray *records;

- (id)description;
- (void).cxx_destruct;
- (void)addRecord:(id)a0;
- (id)initWithRecords:(id)a0;
- (id)recordsWithRecordType:(id)a0;

@end

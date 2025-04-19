@class NSMutableDictionary;

@interface PTParameterRecords : NSObject

@property (retain, nonatomic) NSMutableDictionary *recordDictionary;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)addRecordWithKeyPath:(id)a0 domainID:(id)a1 recordClassName:(id)a2 value:(id)a3;
- (void)removeRecordWithKeyPath:(id)a0 domainID:(id)a1;

@end

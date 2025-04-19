@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase

@property (readonly, nonatomic) NSDictionary *identifierToZoneMap;

- (void)dealloc;
- (id)init;
- (void)addOperation:(id)a0;
- (id)_initWithContainer:(id)a0 scope:(long long)a1;
- (id)_zoneIdentifierForOperation:(id)a0;
- (id)_zoneManager;

@end

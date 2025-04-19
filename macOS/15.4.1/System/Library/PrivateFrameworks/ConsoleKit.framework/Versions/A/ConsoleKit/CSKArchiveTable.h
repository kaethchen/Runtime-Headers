@class CSKDatabaseHandle;

@interface CSKArchiveTable : NSObject

@property (weak, nonatomic) CSKDatabaseHandle *dbHandle;
@property (nonatomic) unsigned long long ID;

+ (id)nameForID:(unsigned long long)a0;

- (id)name;
- (void).cxx_destruct;
- (id)initWithDatabaseHandle:(id)a0 tableID:(unsigned long long)a1;
- (void)createTable:(unsigned long long)a0;
- (void)setPropertiesAndValues:(id)a0;
- (void)setProperty:(id)a0 forKey:(id)a1 domain:(id)a2;

@end

@class NSArray;

@interface CCDatabaseValueRow : NSObject {
    NSArray *_databaseValueArray;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (id)initWithDatabaseValueArray:(id)a0;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;

@end

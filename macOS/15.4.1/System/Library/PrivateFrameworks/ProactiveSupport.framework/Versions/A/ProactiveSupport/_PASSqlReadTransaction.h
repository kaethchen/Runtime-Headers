@class _PASSqliteDatabase;

@interface _PASSqlReadTransaction : NSObject

@property (readonly, nonatomic) _PASSqliteDatabase *db;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;

@end

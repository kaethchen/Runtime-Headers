@class _PASSqliteDatabase;

@interface PPReadTransaction : NSObject

@property (readonly) _PASSqliteDatabase *db;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;

@end

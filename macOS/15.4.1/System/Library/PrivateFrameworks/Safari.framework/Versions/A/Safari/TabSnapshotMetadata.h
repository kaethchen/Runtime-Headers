@class NSString, NSDate;

@interface TabSnapshotMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSString *URLString;

- (void).cxx_destruct;
- (id)initWithSQLiteRow:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 creationDate:(id)a1 filename:(id)a2 URLString:(id)a3;

@end

@class CCDatabaseEnumerationResult;

@interface CCDatabaseValueRowEnumerator : NSObject

@property (readonly, nonatomic) CCDatabaseEnumerationResult *enumerationResult;

- (void).cxx_destruct;
- (id)error;
- (id)peek;
- (id)next;
- (id)initWithEnumerationResult:(id)a0;

@end

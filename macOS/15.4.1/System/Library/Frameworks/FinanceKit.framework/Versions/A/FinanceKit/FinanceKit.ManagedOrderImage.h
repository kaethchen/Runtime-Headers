@class _TtC10FinanceKit21ManagedOrderImageData, NSString, _TtC10FinanceKit13StorableColor, NSData;

@interface FinanceKit.ManagedOrderImage : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *localizationName;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic, retain) _TtC10FinanceKit13StorableColor *storedBackgroundColor;
@property (nonatomic, retain) _TtC10FinanceKit21ManagedOrderImageData *orderImageData;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;

@end

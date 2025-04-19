@class NSData, NSSet, _TtC10FinanceKit13StorableColor;

@interface FinanceKit.ManagedOrderImageData : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSData *dataHash;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic, retain) _TtC10FinanceKit13StorableColor *storedBackgroundColorValue;
@property (nonatomic, retain) NSSet *orderImages;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void)willSave;

@end

@class NSString, NSData, NSSet;

@interface CNDuplicateCohort : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *cropRectString;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSData *posterData;
@property (nonatomic, retain) NSSet *duplicates;

- (void).cxx_destruct;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end

@class _TtC10FinanceKit15LocalizedString, NSString, NSSet, NSURL, NSDate;

@interface FinanceKit.ManagedOrderReturn : NSManagedObject

@property (nonatomic, copy) NSString *carrier;
@property (nonatomic, copy) NSString *trackingNumber;
@property (nonatomic, copy) NSSet *lineItemObjects;
@property (nonatomic) short statusValue;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes;
@property (nonatomic, copy) NSString *returnNumber;
@property (nonatomic, copy) NSString *returnLabel;
@property (nonatomic, copy) NSDate *initiationDate;
@property (nonatomic, copy) NSDate *dropOffDate;
@property (nonatomic, copy) NSDate *returnDate;
@property (nonatomic, copy) NSURL *returnManagementURL;
@property (nonatomic, copy) NSString *returnIdentifier;
@property (nonatomic) short positionIndex;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end

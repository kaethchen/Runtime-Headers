@class NSString, LinkTestMO, NSDate, BSSMO;

@interface FaultMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *interface;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) BSSMO *bss;
@property (retain, nonatomic) LinkTestMO *linkTest;

+ (id)entityName;
+ (id)fetchRequest;
+ (unsigned long long)faultCount:(id)a0 maxAgeInDays:(unsigned long long)a1 moc:(id)a2;
+ (id)generateInstance:(id)a0;
+ (id)mostRecentFault:(id)a0 moc:(id)a1;
+ (id)mostRecentFaultsWithBatchSize:(unsigned long long)a0 moc:(id)a1;

@end

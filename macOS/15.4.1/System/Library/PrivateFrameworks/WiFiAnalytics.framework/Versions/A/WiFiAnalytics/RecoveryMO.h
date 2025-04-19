@class NSString, BSSMO, NSDate;

@interface RecoveryMO : NSManagedObject

@property (nonatomic) int apple80211Return;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *recoveryReason;
@property (copy, nonatomic) NSString *recoveryType;
@property (retain, nonatomic) BSSMO *bss;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)a0;
+ (id)mostRecentRecovery:(id)a0 reason:(id)a1 moc:(id)a2;

@end

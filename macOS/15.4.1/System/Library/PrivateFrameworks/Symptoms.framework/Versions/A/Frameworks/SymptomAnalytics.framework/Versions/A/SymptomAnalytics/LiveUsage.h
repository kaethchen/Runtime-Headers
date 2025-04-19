@class NSString, Process, NSDate, NSNumber;

@interface LiveUsage : NSManagedObject

@property (copy, nonatomic) NSNumber *allFlows;
@property (copy, nonatomic) NSDate *billCycleEnd;
@property (copy, nonatomic) NSNumber *jumboFlows;
@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSNumber *metadata;
@property (copy, nonatomic) NSNumber *tag;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *btIN;
@property (copy, nonatomic) NSNumber *btIN_exp;
@property (copy, nonatomic) NSNumber *btOUT;
@property (copy, nonatomic) NSNumber *btOUT_exp;
@property (copy, nonatomic) NSNumber *wifiIN;
@property (copy, nonatomic) NSNumber *wifiIN_exp;
@property (copy, nonatomic) NSNumber *wifiOUT;
@property (copy, nonatomic) NSNumber *wifiOUT_exp;
@property (copy, nonatomic) NSNumber *wiredIN;
@property (copy, nonatomic) NSNumber *wiredIN_exp;
@property (copy, nonatomic) NSNumber *wiredOUT;
@property (copy, nonatomic) NSNumber *wiredOUT_exp;
@property (copy, nonatomic) NSNumber *wwanIN;
@property (copy, nonatomic) NSNumber *wwanIN_exp;
@property (copy, nonatomic) NSNumber *wwanOUT;
@property (copy, nonatomic) NSNumber *wwanOUT_exp;
@property (copy, nonatomic) NSNumber *xIN;
@property (copy, nonatomic) NSNumber *xIN_exp;
@property (copy, nonatomic) NSNumber *xOUT;
@property (copy, nonatomic) NSNumber *xOUT_exp;
@property (retain, nonatomic) Process *hasProcess;
@property (retain, nonatomic) Process *hintedBy;
@property (copy, nonatomic) NSString *procName;
@property (copy, nonatomic) NSString *bundleName;

+ (id)entityName;
+ (id)fetchRequest;

@end

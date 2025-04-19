@class NSNumber, NSArray;

@interface APAttributionConfig : APConfiguration

@property (retain, nonatomic) NSNumber *signingPercentageFPDI;
@property (retain, nonatomic) NSArray *uploadBackoffSchedule;
@property (retain, nonatomic) NSNumber *holdTransactionLimit;

+ (id)path;

@end

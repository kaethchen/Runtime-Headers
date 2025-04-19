@class NSDate;

@interface ATXUIFeedbackMetricsQuery : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long clientModelType;
@property (nonatomic) unsigned char consumerSubType;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToATXUIFeedbackMetricsQuery:(id)a0;

@end

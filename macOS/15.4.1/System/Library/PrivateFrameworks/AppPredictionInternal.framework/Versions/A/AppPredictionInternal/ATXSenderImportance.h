@class NSDictionary;

@interface ATXSenderImportance : NSObject

@property (readonly, nonatomic) double senderImportanceScore;
@property (readonly, nonatomic) NSDictionary *featureDictionary;

- (void).cxx_destruct;
- (id)initWithSenderImportanceScore:(double)a0 featureDictionary:(id)a1;

@end

@interface EDCategorizationProgress : NSObject

@property (readonly, nonatomic) unsigned long long totalMessagesToCategorize;
@property (readonly, nonatomic) unsigned long long categorizedMessages;

- (id)initWithTotalMessagesToCategorize:(unsigned long long)a0 categorizedMessages:(unsigned long long)a1;

@end

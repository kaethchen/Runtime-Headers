@class NSArray;

@interface FinanceKit.StringParamsTransformer : NSSecureUnarchiveFromDataTransformer

@property (class, nonatomic, readonly) NSArray *allowedTopLevelClasses;

- (id)init;

@end

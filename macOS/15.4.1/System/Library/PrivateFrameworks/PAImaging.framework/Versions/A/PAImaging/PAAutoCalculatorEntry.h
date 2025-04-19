@class NSUUID, NSString, NUAutoCalculator;

@interface PAAutoCalculatorEntry : NSObject

@property (retain) NUAutoCalculator *calculator;
@property (retain) NSUUID *operationUUID;
@property (retain) NSString *operationIdentifier;
@property (retain) NSString *autoIdentifier;
@property (copy) id /* block */ completionBlock;

- (id)description;
- (void).cxx_destruct;

@end

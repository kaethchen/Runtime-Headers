@class NSData, NSArray;

@interface ValidationResponse : NSObject

@property (retain, nonatomic) NSData *validatedData;
@property (nonatomic) BOOL isTrusted;
@property (retain, nonatomic) NSArray *certificateChain;

- (void).cxx_destruct;

@end

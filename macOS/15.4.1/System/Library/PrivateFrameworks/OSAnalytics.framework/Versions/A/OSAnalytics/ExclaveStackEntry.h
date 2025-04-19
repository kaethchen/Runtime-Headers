@class NSNumber, NSMutableArray;

@interface ExclaveStackEntry : NSObject

@property (retain, nonatomic) NSNumber *addressSpaceId;
@property (retain, nonatomic) NSMutableArray *frames;

- (void).cxx_destruct;
- (void)addFrames:(id)a0;

@end

@class NSArray, NSMutableArray;

@interface PHASETargetRoomAcousticParameters : NSObject {
    NSMutableArray *_internalArray;
}

@property (readonly, nonatomic) NSArray *subbandParameters;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSubbandParameters:(id)a0;
- (id)subbandParameters;

@end

@class NSArray;

@interface CHPostProcessingManager : NSObject

@property (retain, nonatomic) NSArray *sequence;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStep:(id)a0;
- (id)initWithSequence:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end

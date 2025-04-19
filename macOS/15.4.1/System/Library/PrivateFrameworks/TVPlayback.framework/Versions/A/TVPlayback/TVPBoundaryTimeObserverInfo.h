@class NSArray, NSMutableArray;

@interface TVPBoundaryTimeObserverInfo : NSObject

@property (copy, nonatomic) NSArray *times;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) id tokenFromAVPlayer;
@property (retain, nonatomic) NSMutableArray *tokensFromIntegratedTimeline;

- (id)init;
- (void).cxx_destruct;

@end

@class NSMutableArray;

@interface SCRWebStitchedTextLine : NSObject

@property (retain, nonatomic) NSMutableArray *phrases;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addPhrase;
- (id)lastPhrase;

@end

@class NSArray;

@interface DenyList : NSObject

@property (retain, nonatomic) NSArray *denyListRules;

- (void).cxx_destruct;
- (BOOL)checkIfCaptionInDenylist:(id)a0;

@end

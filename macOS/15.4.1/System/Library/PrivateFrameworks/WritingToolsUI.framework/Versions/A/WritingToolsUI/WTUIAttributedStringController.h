@class NSMutableDictionary;

@interface WTUIAttributedStringController : NSObject

@property (retain) NSMutableDictionary *contextsToDigests;

- (void).cxx_destruct;
- (id)digestedAttributedStringForContext:(id)a0;
- (id)initWithContexts:(id)a0;
- (id)reconstitutedAttributedStringForContext:(id)a0 digestedAttributedString:(id)a1;
- (id)reconstitutedAttributedStringForStitchedContext:(id)a0;

@end

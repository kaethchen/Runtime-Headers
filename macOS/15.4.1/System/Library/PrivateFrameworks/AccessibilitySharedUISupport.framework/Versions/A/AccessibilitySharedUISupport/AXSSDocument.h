@class NSArray, NSMutableArray;

@interface AXSSDocument : NSObject

@property (retain, nonatomic) NSMutableArray *_nodes;
@property (readonly, copy, nonatomic) NSArray *nodes;

+ (id)documentWithAttributedText:(id)a0;
+ (id)documentWithText:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addNode:(id)a0;
- (id)_generateAllWordIssues;
- (id)_generateAllDocIssues;
- (id)generateAllIssues;
- (id)stringByAcceptingFirstSuggestionForIssues:(id)a0;

@end

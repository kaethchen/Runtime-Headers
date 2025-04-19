@class SCRElementHashMarker, SCRTextCheckerEngine, AXSSDocumentIssue;

@interface SCRTextCheckerSearchResult : NSObject

@property (weak, nonatomic) SCRTextCheckerEngine *_engine;
@property (readonly, nonatomic) AXSSDocumentIssue *issue;
@property (readonly, nonatomic) SCRElementHashMarker *marker;
@property (readonly, nonatomic) long long direction;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithIssue:(id)a0 marker:(id)a1 direction:(long long)a2 engine:(id)a3;

@end

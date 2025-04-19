@class NSString, NSMutableArray;

@interface _ECParsedHTMLNode : NSObject <ECMessageBodyNode, ECMessageBodyTreeNode, ECMessageBodyConsumableInnerTextNode> {
    NSMutableArray *_childNodes;
}

@property (weak, nonatomic) _ECParsedHTMLNode *parentNode;
@property (weak, nonatomic) _ECParsedHTMLNode *nextSibling;
@property (readonly, nonatomic) BOOL hasChildNodes;
@property (readonly, nonatomic) _ECParsedHTMLNode *firstChild;
@property (readonly, nonatomic) _ECParsedHTMLNode *lastChild;
@property (readonly, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSString *htmlString;
@property (nonatomic) unsigned long long startLocation;
@property (nonatomic) unsigned long long endLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)recursiveDescription;
- (void)appendChild:(id)a0;
- (void)addRecursiveDescriptionWithLevel:(unsigned long long)a0 toString:(id)a1;
- (void)collectDescendanceIntoArray:(id)a0;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;
- (id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;

@end

@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;
@property (readonly) id<DOMNodeFilter> filter;
@property (readonly) BOOL expandEntityReferences;
@property (retain) DOMNode *currentNode;

- (void)dealloc;
- (id)previousSibling;
- (id)nextNode;
- (id)nextSibling;
- (id)previousNode;
- (id)parentNode;
- (id)firstChild;
- (id)lastChild;

@end

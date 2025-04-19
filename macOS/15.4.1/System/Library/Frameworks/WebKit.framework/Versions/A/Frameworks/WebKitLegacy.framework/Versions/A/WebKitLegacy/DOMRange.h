@class WebArchive, NSString, DOMNode;

@interface DOMRange : DOMObject

@property (readonly, nonatomic) WebArchive *webArchive;
@property (readonly, copy, nonatomic) NSString *markupString;
@property (readonly) DOMNode *startContainer;
@property (readonly) int startOffset;
@property (readonly) DOMNode *endContainer;
@property (readonly) int endOffset;
@property (readonly) BOOL collapsed;
@property (readonly) DOMNode *commonAncestorContainer;
@property (readonly, copy) NSString *text;

- (void)dealloc;
- (id)description;
- (void)detach;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBox;
- (short)compareBoundaryPoints:(unsigned short)a0 sourceRange:(id)a1;
- (id)renderedImageForcingBlackText:(BOOL)a0;
- (id)textRects;
- (id)toString;
- (void)setStartBefore:(id)a0;
- (void)setStartAfter:(id)a0;
- (void)expand:(id)a0;
- (id)extractContents;
- (BOOL)intersectsNode:(id)a0;
- (id)_text;
- (id)cloneContents;
- (id)cloneRange;
- (void)collapse:(BOOL)a0;
- (short)compareBoundaryPoints:(unsigned short)a0 :(id)a1;
- (short)compareNode:(id)a0;
- (short)comparePoint:(id)a0 offset:(int)a1;
- (id)createContextualFragment:(id)a0;
- (void)deleteContents;
- (void)insertNode:(id)a0;
- (BOOL)isPointInRange:(id)a0 offset:(int)a1;
- (id)lineBoxRects;
- (void)selectNode:(id)a0;
- (void)selectNodeContents:(id)a0;
- (void)setEnd:(id)a0 :(int)a1;
- (void)setEnd:(id)a0 offset:(int)a1;
- (void)setEndAfter:(id)a0;
- (void)setEndBefore:(id)a0;
- (void)setStart:(id)a0 :(int)a1;
- (void)setStart:(id)a0 offset:(int)a1;
- (void)surroundContents:(id)a0;

@end

@class NSMutableArray;

@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter {
    NSMutableArray *mStateStack;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)currentState;
- (BOOL)addElement:(id)a0;
- (void)popState;
- (id)pushState;
- (BOOL)writeAttribute:(id)a0 enumContent:(int)a1 map:(id)a2;
- (BOOL)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 enumContent:(int)a2 map:(id)a3;
- (BOOL)startOAElement:(id)a0;
- (BOOL)writeIndexAttribute:(id)a0 intContent:(unsigned long long)a1;
- (BOOL)writeOAAttribute:(id)a0 doubleContent:(double)a1;
- (id)currentAttributePrefix;
- (id)currentElementPrefix;
- (id)initWithTextWriterProvider:(id)a0;
- (void)pushElementPrefix:(id)a0 attributePrefix:(id)a1;
- (void)pushOAState;
- (id)pushStateWithElementPrefix:(id)a0 attributePrefix:(id)a1;
- (id)pushStateWithSharedPrefix:(id)a0;
- (BOOL)startElement:(id)a0;
- (BOOL)writeAttribute:(id)a0 boolContent:(BOOL)a1;
- (BOOL)writeAttribute:(id)a0 content:(id)a1;
- (BOOL)writeAttribute:(id)a0 doubleContent:(double)a1;
- (BOOL)writeAttribute:(id)a0 intContent:(long long)a1;
- (BOOL)writeAttribute:(id)a0 unsignedLongContent:(unsigned long long)a1;
- (BOOL)writeOAAttribute:(id)a0 boolContent:(BOOL)a1;
- (BOOL)writeOAAttribute:(id)a0 content:(id)a1;
- (BOOL)writeOAAttribute:(id)a0 enumContent:(int)a1 map:(id)a2;
- (BOOL)writeOAAttribute:(id)a0 intContent:(long long)a1;
- (BOOL)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 boolContent:(BOOL)a2;
- (BOOL)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 content:(id)a2;
- (BOOL)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 doubleContent:(double)a2;
- (BOOL)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 intContent:(long long)a2;
- (void)writeTextString:(id)a0 forElement:(id)a1;
- (BOOL)writeValAttributeOnlyElementWithName:(id)a0 boolContent:(BOOL)a1;
- (BOOL)writeValAttributeOnlyElementWithName:(id)a0 content:(id)a1;
- (BOOL)writeValAttributeOnlyElementWithName:(id)a0 doubleContent:(double)a1;
- (BOOL)writeValAttributeOnlyElementWithName:(id)a0 enumContent:(int)a1 map:(id)a2;
- (BOOL)writeValAttributeOnlyElementWithName:(id)a0 intContent:(long long)a1;

@end

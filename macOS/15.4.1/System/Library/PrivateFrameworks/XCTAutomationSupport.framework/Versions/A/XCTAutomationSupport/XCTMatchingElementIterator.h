@class XCElementSnapshot, NSSet, NSString, NSEnumerator;
@protocol XCTElementSetTransformer;

@interface XCTMatchingElementIterator : NSObject <XCTMatchingElementIterator> {
    NSEnumerator *_outputEnumerator;
}

@property (readonly) XCElementSnapshot *input;
@property (readonly) id<XCTElementSetTransformer> transformer;
@property (retain) XCElementSnapshot *currentMatch;
@property (retain) NSSet *currentRelatedElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithInput:(id)a0 transformer:(id)a1;
- (id)nextMatch;

@end

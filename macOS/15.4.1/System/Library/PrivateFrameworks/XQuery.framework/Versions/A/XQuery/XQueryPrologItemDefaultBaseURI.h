@class NSString;

@interface XQueryPrologItemDefaultBaseURI : NSObject <XQueryPrologItemBehavior> {
    NSString *baseURI;
    long long line;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseURI:(id)a0 atLine:(long long)a1;

@end

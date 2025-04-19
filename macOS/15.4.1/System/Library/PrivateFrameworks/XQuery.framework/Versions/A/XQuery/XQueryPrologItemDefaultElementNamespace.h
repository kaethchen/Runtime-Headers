@class NSString;

@interface XQueryPrologItemDefaultElementNamespace : NSObject <XQueryPrologItemBehavior> {
    NSString *namespaceString;
    long long line;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementNamespace:(id)a0 atLine:(long long)a1;

@end

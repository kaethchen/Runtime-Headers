@class NSString;

@interface XQueryPrologItemModuleNamespace : NSObject <XQueryPrologItemBehavior> {
    NSString *namespaceString;
    NSString *prefix;
    long long line;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleNamespace:(id)a0 forPrefix:(id)a1 atLine:(long long)a2;

@end

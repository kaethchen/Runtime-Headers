@class NSString, NSArray;

@interface XQueryPrologItemModuleImport : NSObject <XQueryPrologItemBehavior> {
    NSString *namespaceString;
    NSArray *locations;
    NSString *prefix;
    long long line;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleImport:(id)a0 atLocations:(id)a1 forPrefix:(id)a2 atLine:(long long)a3;

@end

@class NSString, NSArray;

@interface XQueryPrologItemSchemaImportDefaultElement : NSObject <XQueryPrologItemBehavior> {
    NSString *namespaceString;
    NSArray *locations;
    long long line;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultElement:(id)a0 atLocations:(id)a1 atLine:(long long)a2;

@end

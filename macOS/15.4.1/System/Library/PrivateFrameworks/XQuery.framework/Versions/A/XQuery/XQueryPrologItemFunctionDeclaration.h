@class NSString, NSArray, XQueryTypeDeclaration;

@interface XQueryPrologItemFunctionDeclaration : NSObject <XQueryPrologItemBehavior> {
    NSString *name;
    NSArray *paramList;
    XQueryTypeDeclaration *type;
    id expr;
    BOOL external;
    long long line;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)function:(id)a0 withParams:(id)a1 ofType:(id)a2 forExpr:(id)a3 isExternal:(BOOL)a4 atLine:(long long)a5;

@end

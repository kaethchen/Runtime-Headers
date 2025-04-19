@class NSString, XQueryTypeDeclaration;

@interface XQueryPrologItemVariableDeclaration : NSObject <XQueryPrologItemBehavior> {
    NSString *varName;
    id expr;
    XQueryTypeDeclaration *type;
    BOOL external;
    long long line;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)variable:(id)a0 ofType:(id)a1 forExpr:(id)a2 isExternal:(BOOL)a3 atLine:(long long)a4;

@end

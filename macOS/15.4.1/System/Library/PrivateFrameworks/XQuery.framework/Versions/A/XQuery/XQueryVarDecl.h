@class XQueryTypeDeclaration, XQueryQName;

@interface XQueryVarDecl : NSObject {
    XQueryQName *_name;
    XQueryTypeDeclaration *_type;
    id _expr;
    id _prolog;
}

+ (id)varDecl:(id)a0 forType:(id)a1 withExpr:(id)a2 prolog:(id)a3;

- (void)dealloc;
- (void)finalize;
- (id)name;
- (id)type;
- (BOOL)isExternal;
- (id)expr;
- (id)initWithName:(id)a0 forType:(id)a1 withExpr:(id)a2 prolog:(id)a3;
- (id)prolog;

@end

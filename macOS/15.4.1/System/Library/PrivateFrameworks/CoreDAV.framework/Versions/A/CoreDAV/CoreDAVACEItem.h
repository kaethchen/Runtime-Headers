@class CoreDAVInvertItem, CoreDAVPrincipalItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem, CoreDAVGrantItem, CoreDAVDenyItem;

@interface CoreDAVACEItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;
@property (retain, nonatomic) CoreDAVInvertItem *invert;
@property (retain, nonatomic) CoreDAVGrantItem *grant;
@property (retain, nonatomic) CoreDAVDenyItem *deny;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *protectedItem;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *inherited;

+ (id)copyParseRules;
+ (id)privilegeItemWithNameSpace:(id)a0 andName:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)initWithPrincipal:(id)a0 shouldInvert:(BOOL)a1 action:(int)a2 withPrivileges:(id)a3;

@end

@class NSString, UINSApplicationSettingsRootNode, NSArray;

@interface UINSApplicationSettingsNode : NSObject <NSCopying>

@property (retain, nonatomic) NSString *localizedTitle;
@property (weak, nonatomic) UINSApplicationSettingsRootNode *rootNode;
@property (readonly, nonatomic, getter=_isUserSettable) BOOL userSettable;
@property (copy, nonatomic) NSArray *children;

+ (id)nodeWithDictionary:(id)a0 parentRootNode:(id)a1 parentNode:(id)a2 stringsTableName:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)_copyIvarsToNewInstance:(id)a0;
- (id)_copyWithFilter:(long long)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;
- (void)depthFirstTraversalWithBlock:(id /* block */)a0 postTraversalBlock:(id /* block */)a1;

@end

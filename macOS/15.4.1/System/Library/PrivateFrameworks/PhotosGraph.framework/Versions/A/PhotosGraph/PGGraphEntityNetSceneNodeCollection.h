@class NSSet;

@interface PGGraphEntityNetSceneNodeCollection : PGGraphNodeCollection

@property (readonly) NSSet *localizedNames;

+ (Class)nodeClass;
+ (id)sceneNodesForSceneNames:(id)a0 inGraph:(id)a1;

- (void)enumerateLocalizedNamesUsingBlock:(id /* block */)a0;
- (void)enumerateSceneIdentifiersUsingBlock:(id /* block */)a0;

@end

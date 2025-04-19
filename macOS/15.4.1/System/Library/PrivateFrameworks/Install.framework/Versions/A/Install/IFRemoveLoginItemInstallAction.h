@interface IFRemoveLoginItemInstallAction : IFInstallAction

- (id)title;
- (id)errorDictionary;
- (BOOL)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (BOOL)runWithQueueElement:(id)a0;

@end

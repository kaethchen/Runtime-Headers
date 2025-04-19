@class NSURL;

@interface IFOpenURLInstallAction : IFInstallAction {
    NSURL *_url;
}

- (void)dealloc;
- (id)title;
- (id)errorDictionary;
- (BOOL)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (BOOL)runWithQueueElement:(id)a0;

@end

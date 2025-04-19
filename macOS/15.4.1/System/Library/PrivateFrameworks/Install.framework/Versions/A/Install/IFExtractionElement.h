@class NSDictionary;

@interface IFExtractionElement : IFTaskElement {
    NSDictionary *_remoteExtractionBOMErrorDictionary;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (long long)run;
- (id)logDescription;
- (void)_packageExtractionErrorNotificationHandler:(id)a0;
- (void)setInstallElement:(id)a0;

@end

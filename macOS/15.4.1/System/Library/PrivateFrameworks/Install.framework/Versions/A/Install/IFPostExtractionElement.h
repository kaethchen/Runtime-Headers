@interface IFPostExtractionElement : IFInstallQueueElement {
    int _installKey;
}

- (id)description;
- (long long)run;
- (id)initWithKey:(int)a0;
- (id)logDescription;

@end

@class NSSet;

@interface IFAppRegisterElement : IFInstallQueueElement {
    NSSet *_lsPaths;
    int _installKey;
}

- (void)dealloc;
- (long long)run;
- (id)logDescription;
- (id)initWithLaunchServicesPaths:(id)a0 withInstallKey:(int)a1;

@end

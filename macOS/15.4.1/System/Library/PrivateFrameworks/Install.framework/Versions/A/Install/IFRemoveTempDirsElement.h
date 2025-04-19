@class NSString;

@interface IFRemoveTempDirsElement : IFInstallQueueElement {
    NSString *_tempPath;
    int _installKey;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)logDescription;
- (id)initWithPath:(id)a0 installKey:(int)a1;

@end

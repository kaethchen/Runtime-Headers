@class NSString;

@interface IFMakeTempDirsElement : IFInstallQueueElement {
    NSString *_tempPath;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)initWithPath:(id)a0;
- (id)logDescription;
- (BOOL)createDirectory:(id)a0 withPermissions:(id)a1 eraseExisting:(BOOL)a2;

@end

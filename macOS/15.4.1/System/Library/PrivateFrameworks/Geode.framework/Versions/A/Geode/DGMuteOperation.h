@interface DGMuteOperation : DGOperation

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;

- (id)settingsDictionary;
- (BOOL)isMigratable;

@end

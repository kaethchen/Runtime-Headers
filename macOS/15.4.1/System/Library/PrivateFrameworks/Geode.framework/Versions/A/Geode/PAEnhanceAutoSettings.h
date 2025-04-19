@interface PAEnhanceAutoSettings : IPAAutoSettings

@property (nonatomic) double vibrance;
@property (nonatomic) BOOL isNoOp;

- (BOOL)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end

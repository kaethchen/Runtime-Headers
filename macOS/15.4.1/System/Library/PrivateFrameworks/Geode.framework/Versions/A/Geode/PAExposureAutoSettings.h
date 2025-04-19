@interface PAExposureAutoSettings : IPAAutoSettings

@property (nonatomic) double EV;
@property (nonatomic) BOOL isNoOp;

- (BOOL)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end

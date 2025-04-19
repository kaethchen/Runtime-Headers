@interface PASmartColorAutoSettings : IPAAutoSettings

@property (nonatomic) double p75;
@property (nonatomic) double p98;
@property (nonatomic) double autoValue;
@property (nonatomic) double g98;

- (id)init;
- (BOOL)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end

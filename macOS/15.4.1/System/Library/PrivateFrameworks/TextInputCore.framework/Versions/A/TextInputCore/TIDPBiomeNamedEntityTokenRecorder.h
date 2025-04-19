@interface TIDPBiomeNamedEntityTokenRecorder : TIDPRecorder

- (id)delegate;
- (id)records;
- (BOOL)report;
- (id)filterTokenFrequencies:(id)a0 forTokenClass:(unsigned int)a1;
- (id)givenNameRecordingKey;
- (BOOL)shouldSkipWordEntry:(id)a0;
- (id)surnameRecordingKey;

@end

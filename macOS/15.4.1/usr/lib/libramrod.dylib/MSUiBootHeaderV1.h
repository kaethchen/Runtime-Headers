@interface MSUiBootHeaderV1 : MSUiBootHeader

@property unsigned int valid;

- (id)description;
- (unsigned int)length;
- (BOOL)isValid;
- (void)invalidate;
- (long long)compareTo:(id)a0;
- (BOOL)loadHeaderAtOffset:(unsigned int)a0;
- (void)makeValid;
- (id)packStructure;
- (void)setAsFirstGeneration;

@end

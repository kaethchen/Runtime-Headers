@class IOServiceWriter;

@interface MSUiBootHeader : NSObject

@property unsigned int startLocation;
@property unsigned int imageAddress;
@property unsigned int headerGeneration;
@property (retain) IOServiceWriter *serviceWriter;

- (void)dealloc;
- (unsigned int)length;
- (BOOL)isValid;
- (void)invalidate;
- (long long)compareTo:(id)a0;
- (void)bumpGeneration;
- (id)initWithIOServiceWriter:(id)a0;
- (BOOL)loadHeaderAtOffset:(unsigned int)a0;
- (void)makeValid;
- (id)packStructure;
- (void)setAsFirstGeneration;
- (void)writeHeaderToOffset:(unsigned int)a0;

@end

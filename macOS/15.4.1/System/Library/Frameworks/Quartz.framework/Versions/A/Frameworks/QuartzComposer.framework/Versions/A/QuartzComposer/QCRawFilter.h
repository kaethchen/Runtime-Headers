@class NSString, QCImagePort, NSData, CIFilter;

@interface QCRawFilter : QCPatch {
    QCImagePort *outputImage;
}

@property (retain) NSString *_filename;
@property (retain) NSData *_imageData;
@property (retain) CIFilter *_filter;

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (BOOL)setPath:(id)a0;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)filterForData:(id)a0;
- (id)filterForFile:(id)a0;
- (id)filterForURL:(id)a0;
- (void)populateFilterWithPortValues;
- (void)setupPorts:(id)a0;

@end

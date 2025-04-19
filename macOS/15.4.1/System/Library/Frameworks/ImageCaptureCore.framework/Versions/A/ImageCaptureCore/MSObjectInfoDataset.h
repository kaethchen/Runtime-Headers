@class NSString, NSData;

@interface MSObjectInfoDataset : NSObject

@property (nonatomic) unsigned int objectHandle;
@property (nonatomic) unsigned int storageID;
@property (nonatomic) unsigned int parentObject;
@property (nonatomic) unsigned short associationType;
@property (nonatomic) unsigned int associationDesc;
@property (nonatomic) unsigned short objectFormat;
@property (nonatomic) unsigned short protectionStatus;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned long long objectCompressedSize;
@property (nonatomic) unsigned short imageOrientation;
@property (nonatomic) unsigned int thumbCompressedSize;
@property (nonatomic) unsigned short thumbFormat;
@property (nonatomic) unsigned int thumbOffset;
@property (nonatomic) unsigned int thumbPixWidth;
@property (nonatomic) unsigned int thumbPixHeight;
@property (nonatomic) unsigned int imagePixWidth;
@property (nonatomic) unsigned int imagePixHeight;
@property (nonatomic) unsigned int imageBitDepth;
@property (copy, nonatomic) NSString *filename;
@property (nonatomic) unsigned long long captureDate_tvsec;
@property (nonatomic) unsigned long long modificationDate_tvsec;
@property (readonly, copy, nonatomic) NSData *content;

- (id)init;
- (id)initWithBytes:(char *)a0 length:(unsigned int)a1;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)contentLength:(unsigned int *)a0 bufferLength:(unsigned int *)a1;

@end

@class NSString, NSData;

@interface ICScannerBandData : NSObject

@property unsigned long long fullImageWidth;
@property unsigned long long fullImageHeight;
@property unsigned long long bitsPerPixel;
@property unsigned long long bitsPerComponent;
@property unsigned long long numComponents;
@property (getter=isBigEndian) BOOL bigEndian;
@property unsigned long long pixelDataType;
@property (retain) NSString *colorSyncProfilePath;
@property unsigned long long bytesPerRow;
@property unsigned long long dataStartRow;
@property unsigned long long dataNumRows;
@property unsigned long long dataSize;
@property (retain) NSData *dataBuffer;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

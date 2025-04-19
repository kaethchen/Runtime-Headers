@class NSImage, NSArray, NSString;

@interface CRCameraReaderOutputIDCard : CRCameraReaderOutput

@property (readonly) NSImage *imageValue;
@property (readonly) NSArray *vertices;
@property (readonly) NSArray *targetVertices;
@property (readonly) NSString *capturePath;

@end

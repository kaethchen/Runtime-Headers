@class NSURL;

@interface IKScanResult : NSObject

@property (copy) NSURL *url;

- (id)imageRepresentation;
- (id)imageRepresentationType;
- (id)imageUID;

@end

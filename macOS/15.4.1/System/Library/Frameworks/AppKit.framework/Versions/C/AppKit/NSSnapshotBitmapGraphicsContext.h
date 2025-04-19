@class NSMutableData, NSSnapshotContextSignature;

@interface NSSnapshotBitmapGraphicsContext : NSBitmapGraphicsContext

@property (retain, nonatomic) NSSnapshotContextSignature *signature;
@property (retain, nonatomic) NSMutableData *backingData;

- (void)dealloc;
- (struct CGImage { } *)retainedCGImage;

@end

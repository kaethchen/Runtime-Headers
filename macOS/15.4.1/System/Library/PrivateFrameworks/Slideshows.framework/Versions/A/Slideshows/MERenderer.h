@class MPDocument, MRSnapshotter, MCMontage;
@protocol MZMediaManagement;

@interface MERenderer : NSObject {
    MPDocument *_document;
    MCMontage *_montage;
    MRSnapshotter *_snapshotter;
    id<MZMediaManagement> _assetManagementDelegate;
}

@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly) unsigned int bytesPerRow;

- (void)dealloc;
- (void)_setup;
- (id)initWithDocument:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1 andPreferences:(id)a2;
- (void)snapshotAtTime:(double)a0 toBuffer:(unsigned int *)a1;

@end

@class AMPTracklistFooterLockup, AMPTrackTableLockup, AMPAlbumHeaderLockup;
@protocol AlbumDetailLockupModel;

@interface AlbumDetailLockup : NSTableCellView

@property (weak, nonatomic) AMPAlbumHeaderLockup *header;
@property (weak, nonatomic) AMPTrackTableLockup *trackTable;
@property (weak, nonatomic) AMPTracklistFooterLockup *footer;
@property (retain, nonatomic) id<AlbumDetailLockupModel> viewModel;

+ (id)lockup;

- (id)init;
- (void).cxx_destruct;

@end

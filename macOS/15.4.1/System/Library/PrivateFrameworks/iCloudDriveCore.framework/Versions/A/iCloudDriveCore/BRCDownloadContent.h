@class BRCProgress, BRCServerZone;

@interface BRCDownloadContent : BRCDownload {
    BRCServerZone *_zone;
    int _kind;
    BOOL _isFinderBookmark;
}

@property (readonly, nonatomic) BOOL isLoser;
@property (readonly, nonatomic) BOOL isDocumentModifiedByOtherUser;
@property (retain, nonatomic) BRCProgress *progress;

- (id)description;
- (void).cxx_destruct;
- (int)kind;
- (void)setProgress:(id)a0;
- (BOOL)_stageWithDownloadStager:(id)a0 error:(id *)a1;
- (BOOL)_stageWithDownloadStager:(id)a0 manifest:(id)a1 package:(id)a2 xattrsPackage:(id)a3 error:(id *)a4;
- (id)etagIfLoser;
- (id)initWithDocument:(id)a0 stageID:(id)a1 etagIfLoser:(id)a2 downloadKind:(int)a3;

@end

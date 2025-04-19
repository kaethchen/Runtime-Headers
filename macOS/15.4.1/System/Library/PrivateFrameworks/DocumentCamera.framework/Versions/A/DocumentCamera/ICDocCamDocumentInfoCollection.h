@class NSString, NSMutableArray, NSDate;

@interface ICDocCamDocumentInfoCollection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *docInfos;

+ (id)infoCollectionFromArchiveSidecarItems:(id)a0 imageCache:(id)a1;
+ (void)infoCollectionFromImageSidecarItems:(id)a0 imageCache:(id)a1 completion:(id /* block */)a2;
+ (void)infoCollectionFromSidecarItems:(id)a0 imageCache:(id)a1 completion:(id /* block */)a2;
+ (id)infoCollectionWithArchivedDocumentCameraScanData:(id)a0 imageCache:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)bumpModificationDate;

@end

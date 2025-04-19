@interface ICDCopyObjectThumbnailImp : ICDBaseCommandImp {
    char *_thumbnailBufferPtr;
    long long _thumbnailBufferSize;
}

- (id)process;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;

@end

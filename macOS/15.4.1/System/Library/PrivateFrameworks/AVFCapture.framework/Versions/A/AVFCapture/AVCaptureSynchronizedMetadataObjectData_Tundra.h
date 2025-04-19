@class NSArray, AVCaptureSynchronizedMetadataObjectDataInternal_Tundra;

@interface AVCaptureSynchronizedMetadataObjectData_Tundra : AVCaptureSynchronizedData_Tundra {
    AVCaptureSynchronizedMetadataObjectDataInternal_Tundra *_internal;
}

@property (readonly) NSArray *metadataObjects;

- (void)dealloc;

@end

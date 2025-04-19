@class NSString, NSData;

@interface PaperKit.PKDrawingUUIDKeyPath : NSObject <PKDrawingUUID, NSCopying> {
    void /* unknown type, empty encoding */ keypath;
}

@property (nonatomic, readonly) NSString *uniqueCacheFilePath;
@property (nonatomic, readonly) NSData *AES128Key;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

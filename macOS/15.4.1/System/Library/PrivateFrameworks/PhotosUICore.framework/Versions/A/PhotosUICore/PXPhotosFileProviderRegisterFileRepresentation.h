@class NSURL, NSString, UTType;

@interface PXPhotosFileProviderRegisterFileRepresentation : NSObject {
    void /* unknown type, empty encoding */ fileProviderURL;
    void /* unknown type, empty encoding */ contentType;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ identifierCode;
}

@property (nonatomic, readonly) NSURL *fileProviderURL;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasLimitedVisibility;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *identifierCode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isThumbnail;

- (id)init;
- (void).cxx_destruct;

@end

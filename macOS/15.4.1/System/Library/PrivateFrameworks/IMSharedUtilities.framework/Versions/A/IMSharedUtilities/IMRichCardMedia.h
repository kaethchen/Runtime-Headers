@class NSString;

@interface IMRichCardMedia : NSObject <IMAttributableContent> {
    void /* unknown type, empty encoding */ mediaUrl;
    void /* unknown type, empty encoding */ mediaContentType;
    void /* unknown type, empty encoding */ thumbnailUrl;
    void /* unknown type, empty encoding */ thumbnailContentType;
    void /* unknown type, empty encoding */ contentDescription;
}

@property (nonatomic, readonly) NSString *mediaUrl;
@property (nonatomic, readonly) NSString *mediaContentType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ mediaFileSize;
@property (nonatomic, readonly) NSString *thumbnailUrl;
@property (nonatomic, readonly) NSString *thumbnailContentType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ thumbnailFileSize;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ height;
@property (nonatomic, readonly) NSString *contentDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithMediaUrl:(id)a0 mediaContentType:(id)a1 mediaFileSize:(id)a2 thumbnailUrl:(id)a3 thumbnailContentType:(id)a4 thumbnailFileSize:(id)a5 height:(long long)a6 contentDescription:(id)a7;

@end

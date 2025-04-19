@class NSString;

@interface Archetype.ATPlayedMediaItem : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ artist;
    void /* unknown type, empty encoding */ album;
    void /* unknown type, empty encoding */ link;
    void /* unknown type, empty encoding */ bundleID;
    void /* unknown type, empty encoding */ mediaType;
    void /* unknown type, empty encoding */ playTime;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 artist:(id)a1 album:(id)a2 link:(id)a3 bundleID:(id)a4 mediaType:(id)a5 playTime:(double)a6;

@end

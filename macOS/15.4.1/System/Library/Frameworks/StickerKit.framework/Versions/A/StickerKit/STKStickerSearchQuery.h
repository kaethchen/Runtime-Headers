@class NSString, NSArray;

@interface STKStickerSearchQuery : NSObject {
    void /* unknown type, empty encoding */ exactQuery;
    void /* unknown type, empty encoding */ autocorrectedQuery;
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ multilingualSearchLocales;
}

@property (nonatomic, copy) NSString *exactQuery;
@property (nonatomic, copy) NSString *autocorrectedQuery;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSArray *multilingualSearchLocales;
@property (nonatomic) void /* unknown type, empty encoding */ supportsImages;
@property (nonatomic) void /* unknown type, empty encoding */ supportsGenmoji;
@property (nonatomic) void /* unknown type, empty encoding */ supportsEmoji;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)trimmedEmojiSearchQuery;

@end

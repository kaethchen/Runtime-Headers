@class RFBadgedImage, RFUrlImage, NSData, RFSymbolImage, NSString, RFDefaultBrowserAppIconImage, NSDictionary, RFMonogramImage, RFAppIconImage, RFAvatarImage;

@interface RFImageSource : NSObject <RFImageSource, NSSecureCoding, NSCopying> {
    struct { unsigned char url : 1; unsigned char symbol : 1; unsigned char app_icon : 1; unsigned char avatar : 1; unsigned char monogram : 1; unsigned char badged_image : 1; unsigned char default_browser_app_icon : 1; unsigned char do_not_show_loading_placeholder : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RFUrlImage *url;
@property (retain, nonatomic) RFSymbolImage *symbol;
@property (retain, nonatomic) RFAppIconImage *app_icon;
@property (retain, nonatomic) RFAvatarImage *avatar;
@property (retain, nonatomic) RFMonogramImage *monogram;
@property (retain, nonatomic) RFBadgedImage *badged_image;
@property (retain, nonatomic) RFDefaultBrowserAppIconImage *default_browser_app_icon;
@property (nonatomic) BOOL do_not_show_loading_placeholder;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasUrl;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasAvatar;
- (BOOL)hasBadged_image;
- (BOOL)hasApp_icon;
- (BOOL)hasDefault_browser_app_icon;
- (BOOL)hasDo_not_show_loading_placeholder;
- (BOOL)hasMonogram;
- (BOOL)hasSymbol;

@end

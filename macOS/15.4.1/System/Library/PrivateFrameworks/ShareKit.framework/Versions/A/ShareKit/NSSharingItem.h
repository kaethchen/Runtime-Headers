@class NSString, NSImage, NSData, NSURL;

@interface NSSharingItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *type;
@property (retain) NSString *string;
@property (retain) NSData *data;
@property (retain) NSImage *image;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *coordinatedURL;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (retain) NSImage *sourceImage;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceImageContentRect;
@property (retain) NSImage *shareImage;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shareImageContentRect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)image;
- (id)shareItemString;
- (id)shareItemData;
- (id)shareItemImage;
- (id)shareItemURL;
- (void)coordinatedURLWithCompletion:(id /* block */)a0;
- (id)coordinatedURLWithError:(id *)a0;
- (id)initWithShareItem:(id)a0;

@end

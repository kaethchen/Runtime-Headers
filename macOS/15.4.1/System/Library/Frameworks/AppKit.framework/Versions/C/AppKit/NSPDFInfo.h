@class NSURL, NSArray, NSMutableDictionary;

@interface NSPDFInfo : NSObject <NSCopying, NSCoding> {
    BOOL _fileExtensionHidden;
}

@property (copy) NSURL *URL;
@property (getter=isFileExtensionHidden) BOOL fileExtensionHidden;
@property (copy) NSArray *tagNames;
@property long long orientation;
@property struct CGSize { double width; double height; } paperSize;
@property (readonly) NSMutableDictionary *attributes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

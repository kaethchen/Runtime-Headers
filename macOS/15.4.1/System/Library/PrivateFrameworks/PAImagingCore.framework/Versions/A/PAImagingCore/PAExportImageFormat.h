@class NSString;

@interface PAExportImageFormat : NSObject

@property (nonatomic) unsigned long long bitsPerChannel;
@property (nonatomic) struct __CFString { } *uti;
@property (retain, nonatomic) NSString *pathExtension;
@property (nonatomic) BOOL canIncludeMetadata;

+ (id)heifFormat;
+ (id)jpegFormatWithQuality:(double)a0;
+ (id)png8Format;
+ (id)psd16Format;
+ (id)psd8Format;
+ (id)tiff16Format;
+ (id)tiff8Format;

- (id)debugDescription;
- (void).cxx_destruct;

@end

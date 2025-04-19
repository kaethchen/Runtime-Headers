@class NSData, NSString;

@interface SODataRetainingImage : NSImage {
    NSString *_fileExtension;
}

@property (retain) NSData *originalData;

+ (BOOL)canInitWithPasteboard:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithPasteboard:(id)a0;

@end
